#!/bin/sh
echo "Starting script for SUPL-3GPP-LPP-CLIENT(v3.2.0), requesting OSR data, using --host 129.192.82.125 --mcc 240 --mnc 1 --cellid 4096 --output_device rs232 --port 5431 --serial /dev/rs232"
stty -F /dev/rs232 115200 cs8
modemcontrol-demo request
example osr --host 129.192.82.125 --mcc 240 --mnc 1 --ci 4096 --tac 1 --port 5431 --serial /dev/rs232
