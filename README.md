# Physical Audio Controller | Deej
This is my own 3D printing design that implements Deej software https://github.com/omriharel/deej able to control audio and mic devices on your computer in a physical way.

![](https://github.com/Ipasky/AudioControllerDeej/blob/main/images/P03.jpg)

| | |
|:------:|:------:|
| ![](https://github.com/Ipasky/AudioControllerDeej/blob/main/images/P01.jpg) | ![](https://github.com/Ipasky/AudioControllerDeej/blob/main/images/P02.jpg) |

## Description
The build implements an Arduino Nano that carry the default code from Deej, in my case, with some modifications because I use a LED push button. You can found my modified code here: [Arduino Code](https://github.com/Ipasky/AudioControllerDeej/blob/main/DeejArduinoCodeMod.ino)

This additional code, in a nutshell, contains more analog inputs and one digital output (for the LED). Because the push button is not auto locking, that means the button is just pressed while you're pushing, in the Arduino code I need to implement a digital variable that controls the pulsation, writing in COM port and turning on and off the LED. I found the code from this page: https://roboticsbackend.com/arduino-turn-led-on-and-off-with-button/


I let here a schematic about the wiring, be aware that in this pic the Arduino board is not a Nano ones, for that reason it doesn't have 8 analogic ports.

![](https://github.com/Ipasky/AudioControllerDeej/blob/main/images/DeejArduinoScheme.jpg)

The push button that I use have 4 pins, two of them to the push button itself, and two more for the LED. In my case, I need to add a resistance trough negative LED pin to analog button pin. I really don't know if this wiring is the optimum, but it works for me.
| | |
|:------:|:------:|
| <img src="https://github.com/Ipasky/AudioControllerDeej/blob/main/images/pushbutton.jpg" width="500" > | <img src="https://github.com/Ipasky/AudioControllerDeej/blob/main/images/pushbuttonpins.jpg" width="500" > |

The final wiring looks like this:

![](https://github.com/Ipasky/AudioControllerDeej/blob/main/images/interiorwiring.jpg)


## Specs
- Dimensions: 220 x 60 x 44 mm
- Weight: 170g
- Material: black PLA & white PLA
- Printing time: 13h 44min

## Components
- [Arduino Nano](https://www.amazon.es/dp/B078S8BJ8T?psc=1&ref=ppx_yo2ov_dt_b_product_details) 
- [Potentiometers Kit](https://www.amazon.es/gp/product/B087Q9JVYD/ref=ppx_yo_dt_b_asin_title_o03_s01?ie=UTF8&psc=1)
- [Knobs](https://www.amazon.es/gp/product/B07DNBDFW8/ref=ppx_yo_dt_b_asin_title_o03_s00?ie=UTF8&psc=1)
- [Push Button](https://www.amazon.es/dp/B09Q8F5JR3?psc=1&ref=ppx_yo2ov_dt_b_product_details)
- Wiring cables
- Terminal block connector
