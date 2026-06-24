# Network configuration for Oz
2026-06-21
davs2rt

## Observations
Dave and Paul have been reverse engineering and documenting the Oz float.
This document summarizes what we've learned about the network that drives the animations.
Errors almost certainly exist.  

## Summary
The Wizard of Oz float uses addressable LEDs, 
driven by a sequence from a [Falcon Player](https://github.com/FalconChristmas/fpp)
running on a Raspberry Pi (versions, memory and storage needed here)
driving a [Pixel Controller](https://pixelcontroller.com) which appears to be an F16V2.
There is also some sort of DMX controller on the onboard ethernet network,
created with a 5 port switch.

## Network
The local area network is all ethernet based, IPV4.
The network is set up with static addresses in the 192.168.2/24 range.
There is no DHCP service.
- The Raspberry Pi is running Falcon Player [version needed] at 192.168.2.2
- The DMX controller (a silver box) is at 192.168.2.3
- The pixel controller (3 printed circuit boards) is at 192.168.2.4

Addresses outside this range are unused and available for client use.

