# AVR Microcontroller Programming

## Overview
This repository contains a series of lab assignments focusing on Atmega328p microcontroller programming using Arduino-Uno completed by me and my lab group for the CMPE 453 Embedded Systems course during the Fall 2023 semester at TED University.

## Contributors
I would like to acknowledge the following contributors for their valuable contributions to the labs and codes:
- Erkan Sancak
- Buğrahan Kadir Sarıca
- Mısra Nur Özdemir
- Elif Aysu Kürşad

## [Lab-1: Binary Game of the LEDs and 7-segment Display](https://github.com/sancakerkan/AVR-Microcontroller-Programming/blob/main/Lab%201%20-%20Binary%20Game%20of%20the%20Leds%20and%207-segment%20Display)

- **Description:** Set up a circuit with a breadboard, Arduino-Uno, 7-segment display, 220Ω resistors (11), 3 LEDs, and jumpers. Program the ATMEGA328p microcontroller to generate a random number between 0 and 7, display it on the 7-segment display, and play a binary light game with the LEDs.

## [Lab-2: UART Communication between Host PC and Atmega328p microcontroller on ArduinoUno Board](https://github.com/sancakerkan/AVR-Microcontroller-Programming/tree/main/Lab%202%20-%20UART%20Communication%20between%20Host%20PC%20and%20Atmega328p%20microcontroller%20on%20ArduinoUno)

- **Description:** Establish serial communication between a host computer and the Atmega328p microcontroller on an Arduino Uno board. Develop an embedded system that accepts a character between 0 and 9 from the serial monitor of the host PC and displays it on the seven-segment display.

## [Lab-3: Button Controlled I2C Data Transfer](https://github.com/sancakerkan/AVR-Microcontroller-Programming/tree/main/Lab%203%20-%20Button%20Controlled%20I2C%20Data%20Transfer)

- **Description:** Connect Arduino-Uno, Arduino Base Shield, Grove Button, and Grove LCD Screen. Program the microcontroller to display a "Hello" message on the LCD screen and count the number of button presses. Reset the count if there are 5 presses in 3 seconds.

## [Lab-4: Basic Color Sensor using Atmega328p Analog to Digital Converter](https://github.com/sancakerkan/AVR-Microcontroller-Programming/tree/main/Lab%204%20-%20Basic%20Color%20Sensor%20using%20Atmega328p%20Analog%20to%20Digital)

- **Description:** Design a basic color sensor to distinguish between Red, Yellow, and Blue color objects using a Grove Light Sensor. Read color intensity from LEDs (Red, Yellow, Blue) and display the detected color on the serial monitor.

## [Lab-5: Interrupt Handling using Atmega328p Microcontroller](https://github.com/sancakerkan/AVR-Microcontroller-Programming/tree/main/Lab%205%20-%20Interrupt%20Handling%20using%20Atmega328p)

- **Description:** Understand the mechanism of interrupt handling by the microcontroller. Connect a push button to INT0, and program the microcontroller to toggle LEDs in response to button presses.

## [Lab-6: Adjustable Clock Design By Using Timers](https://github.com/sancakerkan/AVR-Microcontroller-Programming/tree/main/Lab%206%20-%20Adjustable%20Clock%20Design%20By%20Using%20Timers)

- **Description:** Design a real clock by programming Timer1 of the AVR Microcontroller. Use a push button to adjust the hour and minute values through UART communication. Display the current time on an LCD display and update it based on user input.

## [Lab-7: ARM7 GPIO and Led Blinking](https://github.com/sancakerkan/AVR-Microcontroller-Programming/tree/main/Lab%207%20-%20ARM7%20GPIO%20and%20Led%20Blinking)

- **Description:** Use LPC2148/ LPC2138 microcontroller and connect eight LEDs to P0.9–P0.16 using Proteus simulation software. Program the microcontroller to display a binary number from 100 to 255 in a circular way on the LEDs.

## Getting Started

1. Clone this repository to your local machine.
2. Navigate to the specific lab assignment folder for detailed instructions.
3. Note that every folder has a instruction and report files and also codes for programming AVR Microcontroller(.ino).
4. Follow the provided instructions to set up the hardware, software, and complete the assignment.
5. You can use Arduino IDE to debug and compile the codes. [Donwload Arduino IDE](https://www.arduino.cc/en/software)

## Contributing

Feel free to contribute to this project by submitting issues, suggesting improvements, or contributing code.

## Author
Erkan Sancak, 2023.
