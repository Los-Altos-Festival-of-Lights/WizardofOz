# Wizard of Oz

The Wizard of Oz float has been converted to run from a 12 volt LiFePO4 battery.

The logic and power for most of the lighting is either direct from the battery
or from small DC->DC converters, e.g. the raspberry pi uses a 12v -> 5v converter.

The logic for animating the float consists of:
- An arduino that drives 3 servos in the wizard: left & right arms, and the body rotation.
- A Raspberry Pi, running Falcon Pixel Player. This controls blinking lights on
  - the yellow brick road
  - the poppies on the side of the hill
  - the blinking lights within the city towers (but not the base lights)
  - the wizard's control panel
  - the pi also feeds a USB SoundBlaster dongle, that sends analog audio to a 12v audio amplifier.
- The WS2811 lighting is all driven from an AlphaPix Flex 2.4 Lighting Controller,
which consists of 3 printed circuit boards.
- The base lights of the city towers are controlled from the DMX controller. 
It appears the DMX is only used to set the base lights to green, 
and does not change.
- The Pi, DMX and Pixel controllers are linked via a 5 port ethernet switch, also running on 12v.

12v also powers an AC inverter.  The 120v AC is used to power:
- the green lighting under the float
- DMX lights at the base of the towers
- the floodlight on Dorothy's house
- two imitation flame pots 
