# Arduino-Traffic-Light
A simple Arduino traffic light project using red, yellow, and green LEDs.

Components
Arduino Uno
Red LED
Yellow LED
Green LED
3 × 220Ω resistors
Breadboard
Jumper wires
Wiring

LED	Arduino Pin
🔴 Red	9
🟡 Yellow	8
🟢 Green	7

Each LED should be connected to GND through its own resistor.

How it works

The traffic light cycles through:

Red → Yellow → Green → Red

Each light stays on for 2 seconds.

Code

The Arduino sketch is in traffic_light.ino.
