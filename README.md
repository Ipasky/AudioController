# Audio Controller Deej
This is my own 3D desing that implements Deej software https://github.com/omriharel/deej

![Board Image](https://github.com/Ipasky/AudioControllerDeej/blob/main/docs/P03.jpg)

| | |
|:------:|:------:|
| ![](https://github.com/Ipasky/AudioControllerDeej/blob/main/docs/P01.jpg) | ![](https://github.com/Ipasky/AudioControllerDeej/blob/main/docs/P02.jpg) |

## Description
The build implements an Arduino nano that carry the default code from Deej with some modifications, because in my case i use a push button with a led. You can found my modified code here: https://github.com/Ipasky/AudioControllerDeej/blob/main/DeejArduinoCodeMod.ino

This additional code, in a nutshell, contains more analog inputs and one digital output (for the led). Because the push button is not blockant, that means the button is just pressed while your pushing, in the Arduino code I need to implement a digital variable that controlls the pulsation, writing in COM port and turning on and off the led. I found the code from this page: https://roboticsbackend.com/arduino-turn-led-on-and-off-with-button/


I let here a schematics about the wiring, be aware that in this pic the Arduino board is not a Nano ones, for that reason it doesn't have a 8 analogic ports.

![](https://github.com/Ipasky/AudioControllerDeej/blob/main/docs/DeejArduinoScheme.jpg)

The push button that I use have 4 pins, two of them to the push button itself, and two more for the led. In my case i need to add a resistance trough negative led pin to analog button pin. I really dont know if this wiring is the optimum but it works for me.
| | |
|:------:|:------:|
| <img src="https://github.com/Ipasky/AudioControllerDeej/blob/main/docs/pushbutton.jpg" width="500" > | <img src="https://github.com/Ipasky/AudioControllerDeej/blob/main/docs/pushbuttonpins.jpg" width="500" > |

The final wiring looks like this:

![](https://github.com/Ipasky/AudioControllerDeej/blob/main/docs/interiorwiring.jpg)


## Specs


## Components
- Arduino Nano: https://www.amazon.es/dp/B078S8BJ8T?psc=1&ref=ppx_yo2ov_dt_b_product_details
- Potenciometers:
- Knobs:
- Push Button: https://www.amazon.es/dp/B09Q8F5JR3?psc=1&ref=ppx_yo2ov_dt_b_product_details
- Wiring cables
- Terminal block conector
