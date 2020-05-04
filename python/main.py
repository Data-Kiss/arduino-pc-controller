import serial
import win32com.client as comctl
import os

# Important - You can't run this script whilst the serial monitor is active in the arduino IDE.

wsh = comctl.Dispatch("WScript.Shell")

# This port may vary on your system, so change as appropriate.
arduino = serial.Serial('com6', 9600)


def press_spacebar():
    wsh.SendKeys(" ")


def put_pc_to_sleep():
    os.system("rundll32.exe powrprof.dll,SetSuspendState 0,1,0")


def shutdown_pc():
    os.system("shutdown /s /t 1")


def main():
    while True:
        line = str(arduino.readline().rstrip().decode("utf-8"))
        if line == 'Spacebar':
            press_spacebar()
        if line == 'Sleep':
            put_pc_to_sleep()
        if line == 'Shutdown':
            shutdown_pc()


if __name__ == "__main__":
    main()
