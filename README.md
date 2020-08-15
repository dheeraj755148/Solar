# Automatic Solar Tracker

## Introduction:

Renewable sources of energy are the boon to the human kind particularly in the era of pollution. With the increase of pollution,more and more resources are being tested so as to be substituted with non renewable sources of energy. One of the major contender for this heist is solar energy. The basic technology of solar panels has been around for more than half a century. The little rectangular shaped silicon cells convert solar energy into electrical energy. This energy is stored in batteries. Solar energy is mostly used in areas with more open spaces or like places were clouds are seen less. 
Solar power being in the early stages is one of the crucial alternative to fossil fuels. It could be used as the alternative as well as main source of energy in various sectors based on the area of interest. Being in its early stages, not many inventions and progress are made in the field of solar energy. Basic solar techniques include photovoltaic systems, solar water heating and concentrated solar power.	

The large magnitude of solar energy makes it appealing for harnessing such an enormous energy which could be a great rise for overall global energy budget. Around 30% of the entire sun rays gets reflected back to space and most of solar panels being fixed at a particular angle may not receive adequate amount of solar energy. So, in the below schematics represent the idea of solar tracker which changes its panels position according to sun position.

## Description:


Solar tracker are devices which are used to orient the photovoltaic reflectors according to the position of the sun. Since, the suns’s position changes as per the time, trackers are used to align the collection system to maximize energy production. Several factors must be considered before using the tracker. The below project describes single-axis solar tracker which either tacks horizontal or vertical movement of the sun path. For this project, the solar tacker taken in consideration is a horizontal tracker. Entire horizontal axis i.e. 0 to 180 degree as the path for sun. 


## Hardware Description:

Hardware used for this above circuit :

- Arduino uno
- Servo motor 
- LDR sensors
- Solar panel
- 10k resistors 

Servo motor is used to the change the position of solar panel. LDR is used to detect the change in the suns light so as to change the position of the panel according to it. The two LDR’s are placed at the two sides of solar panel. The servo will move the solar panel towards the LDR whose resistance will be low, mean towards the LDR on which light is falling, that way it follow the light. If the resistance remains same on both sides of the panel, the panel will remain in its current position.

## Circuit Explanation

- Above circuit diagram explains, two LDR’s are connected to Analog pins of A0 and A1.
- Servo pin is connected to pin 9 and has given ground and +5v. 
- LDR’s resistance will decrease when light falls on it, based on it panel changes its position.


## Use:

- With this kind of set up, more amount of solar energy can be collected which is much better then traditional solar panels which is fixed at a particular position.
- Such type of setup can be used in place like were solar energy is the ideal power option, so wasting a little is also not ideal.


### Happy coding
