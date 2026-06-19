# Project 1: Blinking LED

## Overview
This is my first project! A simple LED that blinks on and off at regular intervals. This teaches the basics of:
- Digital output control
- Timing and delays
- Basic program structure in Arduino

## What You Need

### Hardware (Physical)
- Arduino board (Uno, Nano, Mega, etc.)
- 1x LED (any color)
- 1x 220Ω resistor
- Breadboard
- Jumper wires
- USB cable to program Arduino

### Software
- Arduino IDE (https://www.arduino.cc/en/software)
- OR Wokwi simulator (https://wokwi.com/) - no hardware needed!

## Circuit Diagram

```
Arduino Pin 13 ----[LED]----[220Ω Resistor]---- GND
```

**Simple explanation:**
- LED positive (long leg) → Arduino Pin 13
- LED negative (short leg) → 220Ω resistor
- Other end of resistor → Arduino GND (Ground)

### Why 220Ω resistor?
The resistor limits current to protect the LED. Without it, the LED burns out.

## The Code

```cpp
void setup() {
  pinMode(13, OUTPUT);  // Set pin 13 as output
}

void loop() {
  digitalWrite(13, HIGH);  // Turn LED ON
  delay(1000);             // Wait 1 second
  
  digitalWrite(13, LOW);   // Turn LED OFF
  delay(1000);             // Wait 1 second
}
```

## How It Works

1. **`pinMode(13, OUTPUT)`** - Tells Arduino that pin 13 will output power
2. **`digitalWrite(13, HIGH)`** - Sends 5 volts to pin 13 → LED turns ON
3. **`delay(1000)`** - Pauses for 1000 milliseconds (1 second)
4. **`digitalWrite(13, LOW)`** - Sends 0 volts to pin 13 → LED turns OFF
5. **Loop repeats** - This cycle continues forever

## How to Use This

### Option 1: Wokwi Simulator (Recommended for Beginners)
1. Go to https://wokwi.com/
2. Create a new Arduino project
3. Copy the code from `blink.ino` into the editor
4. Click the play button to simulate
5. Watch the LED blink on the screen!

### Option 2: Physical Arduino
1. Connect your Arduino to your computer via USB
2. Open Arduino IDE
3. Copy code from `blink.ino`
4. Select your board type and COM port
5. Click Upload
6. Watch your real LED blink!

## What I Learned

✅ How to set up pins as outputs  
✅ How to control voltage on a pin  
✅ How delays work  
✅ How to write and upload code to Arduino  
✅ Basic program structure (setup + loop)  

## Next Steps

- Modify the code: Change delay times to make it blink faster/slower
- Add more LEDs: Create a traffic light pattern
- Read the Arduino documentation to understand other functions

## Resources

- [Arduino Official Tutorial](https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink)
- [Arduino digitalWrite() Reference](https://www.arduino.cc/reference/en/language/functions/digital-io/digitalwrite/)
- [Arduino delay() Reference](https://www.arduino.cc/reference/en/language/functions/time/delay/)

---

**Created**: 2026-06-19  
**Status**: ✅ Complete  
**Platform**: Wokwi Simulator (works on physical hardware too!)