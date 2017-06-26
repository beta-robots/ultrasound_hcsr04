# ultrasound_hcsr04
Arduino C++ driver for range reading from ultrasonic HC-SR04 device


### Overview
This repository holds an Arduino C++ library to read range data from a [HC-SR04](http://www.elecfreaks.com/store/download/product/Sensor/HC-SR04/HC-SR04_Ultrasonic_Module_User_Guide.pdf) ultrasonic ranging device.

### Download
In case the Arduino libraries folder didn't exist, create it within your Arduino sketch book:
```shell
$ mkdir [somewhere]/your-sketch-book/libraries
```

Move to your Arduino libraries folder:
```shell
$ cd [somewhere]/your-sketch-book/libraries
```

Finally download the library code:
```shell
$ git clone https://github.com/beta-robots/ultrasound_hcsr04.git
```

### How To Use It
Take a look at the examples/hcsr04_reading.ino file to play with the device or to get inspiration for your
developments.

![Wiring example of ultrasound device HCRS04](https://github.com/beta-robots/ultrasound_hcsr04/blob/master/media/ultrasound_hcsr04.jpg)
