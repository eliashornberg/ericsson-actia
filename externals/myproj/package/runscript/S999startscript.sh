#!/bin/sh
echo "Starting script for SUPL-3GPP-LPP-CLIENT(v3.2.0), requesting OSR data, using example-lpp osr --host 129.192.83.103 --mcc 240 --mnc 1 --ci 3 --tac 1 --port 5431 --ublox-serial /dev/rs232"
sleep 10s
modemcontrol-demo request
example-lpp osr --host 129.192.83.103 --mcc 240 --mnc 1 --ci 3 --tac 1 --port 5431 --ublox-serial /dev/rs232
