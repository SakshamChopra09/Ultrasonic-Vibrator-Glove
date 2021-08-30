# Ultrasonic-Vibrator-Glove
The project aims to help the blind to overcome the lack of visual sense, by using senses like sound and touch. It uses audio and vibration signals to notify the user about upcoming hurdle/obstacle. As the distance between glove and obstacle decreases, frequency of both audio and vibration signals increases. Thus, the system helps to ease the navigation process for the needy. I have done using Tinkercad software.
# Arduino
Arduino is an open-source electronics platform based on easy-to-use hardware and software.
# Tinkercad
Tinkercad is an amazingly powerful easy-to-use tool for creating digital designs that are ready to be 3D printed into super-cool physical objects.
# Installation
Arduino IDE can be downloaded from https://www.arduino.cc/en/software.    
Tinkercad can be used online at https://www.tinkercad.com/.
# Usage
 #### For Arduino  
1. Write the given code in arduino IDE.  
2. Construct the hardware circuit as shown in the image Circuit Diagram.png. 
3. Verify and Upload the code.  
4. Move the glove. Distance values will be displayed in Serial Monitor and vibration and sound will be in device.
 #### For Tinkercad
1. Open Circuits section and select Create new Circuit.  
2. Draw the circuit as shown in the image Circuit Diagram.png.  
3. Write the given code in Code section.  
4. Start Simulation. Distance values will be displayed in Serial Monitor and sound and LED will be in device on screen.  

The glove is worn by the blind person and as the person moves, the ultrasonic sensor detects the distance between the person and obstacle.
When the distance goes below 61 cm (in my case), the buzzer starts beeping and the LED glows with the vibration in the gloves.  
The intensity of vibration and rate of beeping increases with decrease in distance and it is a fully automated device.
# Calculation
The distance is calculated in cm which is calculated from time i.e., duration.
Under room conditions, speed of sound is nearly 343 m/s => 34300 cm/s  
              34300 cm --> 1 sec  
                  1 cm --> (1/34300)*1  
                           =29*10^-6 sec  
                           =29 us (micro seconds)  
Sound has to travel the distance twice (to and from object)  
Therefore, divided by 2 => 29/2  
Hence, distance in cm = duration/29/2  

# Other
The same device can be implemented on other equipments like knee guard and elbow guard.
Demonstration video: https://drive.google.com/file/d/1wraBmhWuSw4PbBPq0F8fcjypMVIsyTh6/view?usp=sharing
