# ArduinoPacketSend

This project is a simple Arduino sketch to be used as a companion to the ORSSerialPort PacketParsingDemo project for OS X. It can currently only be run on the [Arduino Esplora](http://arduino.cc/en/Main/ArduinoBoardEsplora). However, the sketch can very easily be ported to run on other Arduino boards, and the concept demonstrated is broadly applicable.

The program simply polls the value of the Esplora's hardware slider, and any time the value changes, it sends a packet on the serial port (at 57600 baud):

`$pos<x>;` (where `<x>` is the knob position, from 1 to 100.)

For more information, please see the ORSSerialPort RequestResponseDemo project as well as the Request Response API Documentation (both are coming soon).

This project is licensed under the terms of the MIT [license](LICENSE.md).