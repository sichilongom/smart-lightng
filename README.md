---

# Smart Lighting System with Object Detection using Arduino


## Overview

Smart Lightng is an Arduino-based project that utilizes object detection to intelligently control lighting systems. With this project, you can automatically switch ON and OFF light bulbs based on the presence of a person in the room. This solution offers convenience, energy efficiency, and automation for various applications such as home automation, office spaces, and public buildings.



## Features

- **Object Detection:** Utilizes object detection algorithms to identify the presence of individuals in a room.
- **Automated Control:** Automatically switches lights on when a person enters the room and off when the room is empty.
- **Energy Efficiency:** Helps in saving energy by ensuring that lights are only turned on when needed.
- **Customizable:** The system can be easily customized to accommodate different types of light fixtures and room sizes and more!

## Hardware Requirements

- Arduino Uno or similar microcontroller board
- PIR (Passive Infrared) motion sensor
- Relay module or solid-state relay (SSR)
- Light bulbs or LED strips
- Jumper wires
- Power supply

## Software Requirements

- Arduino IDE (Integrated Development Environment)
- Libraries for object detection (e.g., OpenCV if using a camera-based approach)
- visual studio

## Installation

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/sichilongom/smart-lightng.git
   ```

2. Connect the required hardware components as per the circuit diagram provided in the repository.

3. Upload the Arduino sketch (`smart_lighting.ino`) to your Arduino board using the Arduino IDE.

4. Follow any additional setup instructions provided in the repository to configure the object detection algorithm if applicable.

5. Power up the system and test the functionality.

## Usage

1. Place the PIR motion sensor in a strategic location within the room to detect movement effectively.

2. Ensure that the Arduino board is powered on and properly connected to the sensor, relay module, and light source.

3. When a person enters the room, the motion sensor will detect the movement and trigger the Arduino to switch on the lights.

4. When the room becomes empty, the motion sensor will no longer detect movement, causing the Arduino to turn off the lights.

## Contributing

Contributions are welcome! If you would like to contribute to this project, please fork the repository and submit a pull request with your changes.

Contact:
- Email: [michealsichilongo@gmail.com](mailto:michealsichilongo@gmail.com)
- Facebook: [michealsichilongo](https://www.facebook.com/profile.php?id=100009147133640)
- Instagram: [m.sichilongo](https://www.instagram.com/m.sichilongo?igsh=MXdqamFwbHMwaG5xdQ==)
- LinkedIn: [Michael Sichilongo](https://www.linkedin.com/in/michael-sichilongo-7b01a322a?utm_source=share&utm_campaign=share_via&utm_content=profile&utm_medium=android_app)
- YouTube: [michealsichilongo](https://youtube.com/@michealsichilongo?si=QcMuomDHvxePmTPL)


## License

This project is licensed under the [MIT License](LICENSE).

## Acknowledgements

- This project was inspired by the need for energy-efficient solutions in home automation.


---
