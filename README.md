# C++ - SpaceShip Take Home Test
## Objective

This is a ment to be a simple programming exercise to gauge a participants understanding of C++. It is ment to test your understanding of: 
* Object Oriented Programming
* Abstract Classes
* Virtualization
* Coding Style and Programming Personality
* Limit Support Problem Solving
* Git

No additional information or help will be given, if you hit a road block or something is poorly defined add a comment to the ambiguous or confusing section and submit it. 

## The Test

Han Solo and Lonestar both had their spaceships repaired at a shady intergalactic repair shop and now the pattened ship design files are available to anyone who has a access the internet. The ships are simply made of from a string, a couple of enums and a well parameterized constructor. Someone graciously assembled an common interface class to allow for the construction of these two legendary spaceships, it is up to you implement the abstract classes to handle the specifics of implementation for each spaceship. Help us c-plus-plus codie, your our only hope!

## Implementation 

Here are the specs for the different spaceship implementations. You will need to write the classes, inheriting from the abstract class "Iface_SpaceShip_t" and defining the pure virtual function you intherited. 

Each Spaceship is made up of the following components. You will need to implement the *TakeAHit* function to implement these behaviors. Note that a Mellinnium Flacon clone can take a hit from both an Eagle 5 clone and another Mellinnium Falcon. The same pattern applies for the Eagle 5 ships. 

### Propulsion
This determines the top speed of a space ship. Assing the spaceships top speed based on the Propulsion System constructed into the ship. 

| Propulsion System | Top Speed (lightyears per hour) |
|-------------------|---------------------------------|
| Hyper Jets        | 36910 lyph                      |
| Warp Drive        | 1041 lyph                       |

### Armaments

This determines how an attack affects speed. When ship's speed reaches zero it is toast.

| Weapon System  | Speed Reduction                                                                                                                   |
|----------------|-----------------------------------------------------------------------------------------------------------------------------------|
| Blaster Cannon | After two hits from a blaster cannon, shields are neutralized and the ship under attack looses 1000 lyph for every shot after     |
| Raspberry Jam  | Each Raspberry Jam attack reduces speed by half, A ship can take three hits of raspberry jam before it is completely immobilized. |

### Ship Type 

The different ship types have the following special abilities. 

| Ship Type         | Special Ability                                                                                             |
|-------------------|-------------------------------------------------------------------------------------------------------------|
| Eagle 5           | Can take an extra hit if the hit is Raspberry Jam, Barf  will clean it up.                                  |
| Millennium Falcon | The first time you check if the ship is moving, it will  report that it is not moving. Old Smugglers trick. |

## Requirements

Your ships will be implemented as shown in the main function. Each ship will be added in to a vector of ships. Each of the ships will attack one another until all the ships have been eliminated. The battle log will be reported and compared to the original battle log. To pass the test your battle log must look the same and your space ship objects must report the correct lightspeed after each attack. See *main.cpp* for the exact seequence that will be used to generate the battle log. 

You will need to implement child classes in *Eagle5.cpp* and *MillenniumFalcon.cpp*. You will also need to implement the function "void PrintStatus()" in the interface class. 

Your code will be compiled and run with gcc version 9. 
