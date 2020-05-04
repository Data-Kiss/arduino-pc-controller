# arduino-pc-controller
Send basic commands to your PC or Laptop using Arduino.

This project allows you to send data from your Arduino to your PC or Laptop using Bluetooth. Contained in the repository is a an arduino sketch, and a Python script. The Python script needs to be run on the PC (only works on Windows currently), before communication can occur. It essentially listens for the data from the Arduino, then runs the appropriate command, depending on the button pushed. There are three commands currently:

* Press spacebar (this will pause most videos, so useful when streaming)
* Put PC to sleep
* Shutdown PC

## Arduino Sketch

I'm not an expert in Arduino/electronics, so feel free to correct me if you see something wrong here (mine hasn't blown up yet, so hopefully it's okay). I am using an Arduino Nano and a Bluetooth HC-05 module. Below is a diagram of the circuit I am using:

![Circuit](https://github.com/Data-Kiss/arduino-pc-controller/blob/master/arduino-pc-controller.png "Arduino HC-05 Circuit")

## Python Script

You don't have to use the Python script if you don't want to, the Arduino sketch will still send the information, so if you have a listening script written in a different language go ahead and use that. You just need to be able to read a serial port.

If you do use the Python script, it will need to be ran as an administrator. In my case, I set up a batch file in Windows Task Scheduler that runs the script when I log in to my PC. You may need to change the COM port (by default in the script it's com6). To find out what COM port is in use go to device manager and select 'Ports (COM & LPT)', and choose the one that is applicable for your paired bluetooth device (HC-05 in this case). 

## Contributing

If you wish to modify this for your own projects, or add other commands, it should be easy enough to do so. This project just provides a general structure, and some basic commands that could be useful. I'm sure there are lots of ways this can be improved, I just created this for my own purposes and thought I'd put it out there in case it's useful for anyone else. If you want to add any more functionality, feel free to submit a PR.