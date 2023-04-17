"# driver-drowsiness-detection" 
TEAM NAME: MAHESH
SAURABH KUMAR
ABHINAV KUMAR THAKUR
AMAN KUMAR

PROBLEM STATEMENT: Create a device that can detect a driver's sleepy eyes and send an alert to the driver while also slowing down the vehicle.
TECH STACK USED: PYTHON, OPENCV, NUMPY , DLIB, SCIPY
APPROACH:
Detecting the status of the driver
Status of the driver are send over to the mechanism
Receival of the status by the mechanism
Actions are taken according to the status of the driver by the mechanism
First of all OpenCV is used to detect the driver's face in the videostream captured by the camera in the car.OpenCV provides pre trained face detection modes that can be used for this purpose.Once the face is detected, mediapipe is uesd to track driver's facial movement.
en the position of driver's eye is used to detect whether they are closing or drooping.By measuring the aspect ratio of the eyes,which is the ratio of height to width we can detect the condition of the driver whether he is good to go ,drowsy or completely sleep and then undertake necessary actions to stop him.
The condition of the driver is then detected and an alert is sent to the driver either through visual or audio aid. This is done by communicating the detecting mechanism with Arduino such that it receives signal from python and then arduino sends the signal to trigger the alert whenever required.

