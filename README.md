# RemoteControl
Based on Arduino & UART RF module

## Software Components
* RemoteContol.ino - main loop, handles: reading Sticks, converting readings to PWM values
* MessageHandler.h - builds Message string and sends to UART

## Arduino pinout
* A0 - Throttle potentiometer washer
* A1 - Direction potentiometer washer
* RX / TX - to UART TX / RX respectivly

## Message ICD
Header,Size,Counter,#Body!~
* Header - AB56FE21: Sticks message
* Size - includes '#' and '~' without Counter
* Counter - running counter
* Body - Throttle,Direction values
