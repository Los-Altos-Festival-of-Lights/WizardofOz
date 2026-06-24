# Oz Power Configuration
2026-06-14
davs2rt

## Observations
Dave and Paul have been reverse engineering and documenting the Oz float.
This document summarizes what we've learned about the power distribution that drives the float.
Errors almost certainly exist in this document,
and text is certainly the least effective way to record this, but...

## 12 volt DC power
Power is first provided by an [Ecoworthy](https://www.eco-worthy.com/) 
12 volt LiFePO 100 Amp-Hr battery
purchased in 2024.
With most everything running, the 12v draw was 20 amps.

The battery cabling goes to bus bars through a marine 100 amp circuit breaker.
**We have found that using these circuit breakers as a switch, 
and opening them under load (as must be done on Oz) is asking for part failure.
We intend to add one of the high current DC relays with arc suppression to
Oz to act as the switch.**

At the 12v bus bars, power is split off to
- the Vector audio amplifier
- the 2000(?) watt Ecoworthy inverter that provides the AC power.
- an arduino that controls the Wizard robot. 
The actual wire is repurposed servo wire with red getting +12v, 
white getting 0v and the green wire tied to the common ground point.
- a **very hot (140°F) yellow cable that needs to be replaced** 
that looks to have been a 3 wire extension cord.
That cable appears to provide the main 12v power to the silver control box that houses 
the lighting and audio controls.
- a small DC-DC converter that provides up to 10A at 5v. 
The 5v cable from this box runs up into the wizard, where it is split off to the 3 servos
that animate the wizard's arms and torso.
- a 12v lead that signals the audio amplifier to turn on (unswitched).
- and more to be discovered.

## The Yellow Cable
The yellow extension cord feeds the control box. 
The power distribution within the box is still TBD, but 
- there is a 12v to 5v USB converter powering the Raspberry Pi
- the pixel controller operates directly from the 12v. 
This implies 12v LED strings, TBD.
- the DMX controller power is unknown
- there is a small centrifugal fan drawing air through the enclosure.
Power supply TBD.
- more to be discovered.

## The Inverter
The 120v AC output of the inverter feeds a power strip with 3 or 4 cords exiting.
Turning the inverter on and off, we observe the following devices are AC powered:
- two "flame" pots on either side of the wizard. 
These are actually a lightweight fabric blown with a fan and lit with LEDs.
- the under-edge green lighting.
- a spotlight that illuminates Dorothy's house and the East Witch's shoes
- more to be discovered.

## Operating Instructions
In prior years, the instructions to turn on the float appear to be impossible: 
"Turn on the inverter, wait 30 seconds, then turn on the 12v circuit breaker."
Since the breaker must be closed for the inverter to get 12v power, 
this could not have worked.

Much of the float runs directly from the 12v power: audio, pixel lighting and the
animation of the wizard do not require the inverter. 

What we observed today was that the Falcon Player and Pixel Controller would 
not reliably get to operating mode from just turning on the power.  
This needs to be investigated further.