# Automatic Door Closer
This project uses a servo motor and an Arduino microcontroller to create an automated door closure system. A sensor built into the system will identify when the door is opened. Once the sensor is triggered the door will close smoothly when the servo motor is activated and winds up a string that is fastened to the door.

![image](https://github.com/erodrigues303/automatic-door-closer/assets/55638835/d35b3793-486d-47dc-b122-f8ceb1ee1de3)
![image](https://github.com/erodrigues303/automatic-door-closer/assets/55638835/f1cc827e-52fb-4eaa-914a-00082ce3adf2)

Once the motion sensor detects the door opening it waits 8 seconds then sends a signal to the servo through the arduino. Once the servo receives the signal the servo begins continuously turning for 30 seconds while winding a string attached to the door around a spool. As the string gets wound around the spool the door gets pulled until it is closed. Once the door is closed the servo unwinds in the opposite direction so the string is loose and the door can be opened once again. C was the programming langauage used for this project as it is very efficent when working with hardware such as ardunio. Also, C is a fast running language which is good as the project needs to run in real time.
