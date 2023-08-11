/* 485-example.c : Basic example of RS485 half duplex transmission */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <errno.h>
#include <termios.h>
#include <sys/ioctl.h>
#include <linux/serial.h>

int main(int argc, char **argv)
{
    int fd;
    struct termios ti;
    speed_t speed;

      if (argc != 2) {
        printf("Syntax: %s </dev/rs232 | /dev/rs485>\n", argv[0]);
        return -1;
    }
   
    /* Open the port */
    fd = open(argv[1], O_RDWR);
    if (fd < 0) {
          printf("%s: Unable to open.\n", argv[1]);
        return -1;
    }

    /* Set the port speed */
    speed = B115200;
    tcgetattr(fd, &ti);
    cfsetospeed(&ti, speed);
    cfsetispeed(&ti, speed);
    tcsetattr(fd, TCSANOW, &ti);
    

    /* Receive data */
    uint8_t data[1] = { 0 };
    int res = read(fd, data, sizeof(data));
    if (res != 1) {
        printf("Failed to read data from serial port!\n");
        close(fd);
        return -1;
    }

    printf("in: %02x\n", data[0]);
    data[0] = data[0] + 1;
    printf("out:%02x\n", data[0]);
 
    /* Send data */
    if (write(fd, data, sizeof(data)) != sizeof(data)) {
        printf("write() failed\n");
        close(fd);
        return -1;
    }

    return 0;
}