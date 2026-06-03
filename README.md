# OLED Typing Animation ❤️

A simple ESP32-S3 project that displays a text message on an SSD1306 OLED using a smooth typewriter animation effect.

The message appears:
- Character by character
- Line by line
- Small delay between lines
- 5% spacing at top and bottom
- Clean OLED layout

---

## Features

✔ Typewriter text animation  
✔ Line-by-line text appearance  
✔ Adjustable typing speed  
✔ Adjustable line delay  
✔ SSD1306 OLED support  
✔ ESP32-S3 compatible  

---

## Hardware Required

- ESP32-S3
- SSD1306 OLED Display (128×64)
- Jumper wires
- USB cable

---

## Connections

| OLED | ESP32-S3 |
|------|----------|
| VCC | 3.3V |
| GND | GND |
| SDA | GPIO 8 |
| SCL | GPIO 9 |

---

## Required Libraries

Install these libraries using Arduino IDE Library Manager:

- Adafruit GFX
- Adafruit SSD1306

---

## Installation

1. Open Arduino IDE
2. Install required libraries
3. Select ESP32-S3 board
4. Connect OLED
5. Upload the code

---

## Animation Effect

The OLED displays:

> Are you a resistor?  
> Because you don't just control  
> my current... you've got my heart too ❤️

### Animation Sequence:
- First line types letter-by-letter
- Short delay
- Second line types
- Short delay
- Third line types

---

## Customization

You can modify:

```cpp
delay(700);   // Delay between lines
```

```cpp
typeText(line1, 5, 3, 50);
```

Change:

- Typing speed
- Text position
- Delay timing
- Display spacing

---

## Folder Structure

```
project/
│
├── sketch.ino
├── README.md
└── images/
```

---

## Future Improvements

- Animated heart
- Scrolling text
- Multiple message support
- OLED transition effects

---

Made with ❤️ using ESP32-S3 and SSD1306 OLED
