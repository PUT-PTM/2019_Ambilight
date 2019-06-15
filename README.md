# 2019_Ambilight

# Overview

The aim of this project was to build solution that determine the dominant color for each of screen’s quarters and
 then displaying the values on 4 RGB diodes connected with STM32F407 board.  

# Description 

The solution consist of two independent modules: C++ console application for PC and application for  STM32 board. 
Communication between them bases on the universal synchronous and asynchronous receiver-transmitter (USART). 
C++ console application reads RGB values for selected pixels from the screen, based on that calculates average 
RGB value for each quarter of the screen. Once this is done value for each  RGB diode is passed to STM32 board 
through the Serial Port. Data is read by STM32 board using interrupt handler and then sent to the diodes using GPIO. 

# Tools 

System Workbench for STM32
STM32CubeMX (v. 5.1.0)

# How to run 

To run the solution you need to build C++ application on your PC, build solution for STM on your board and connect the board
 with PC using USART. Once this is done you can compile console application and using user interface start the transmission. 

# How to compile 

Solution can be run using standard C++ compiler.

# Future improvements 

Currently solution calculates average RGB value for each quarter of the screen basing on 4 pixels only. This can be improved 
however, this require much more sophisticated method of reading RGB value for pixel. Increasing number of pixels checked for 
each quarter using currently applied methodology  significantly increases calculation time (diodes change colors much slower). 

# Attributions 

Configuration of USART was done basing on the learning materials of the Institute of Control, Robotics and Information
Engineering (Poznan University of Technology).

# License 

LICENSE  MIT

# Credits 

Created by Patryk Kuston  & Rafal Szczap
The project was conducted during the Microprocessor Lab course held by the Institute of Control and Information Engineering, 
Poznan University of Technology.
Supervisor: Tomasz Mankowski
