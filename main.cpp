/*
Project 3 - Part 1d / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3. 
Part1 will be broken up into 5 separate steps 
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives and std::string. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine`
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
        Remember to pick properties that can be represented with 'int float double bool char std::string'
2) write the name of the primitive type you'll be using after each property
    pick properties that can be represented with 'int float double bool char std::string'
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            width in cm (int)
            height in cm (int)

3) move Thing 5-9 to between your Thing 4 and Thing 10.
*/



/*
Thing 1) Smartphone
5 properties:
    1) Size of screen (float)
    2) Length of battery life (float)
    3) Brand of phone (std::string)
    4) Data storage capacity (int)
    5) Time taken to charge to full battery (int)
3 things it can do:
    1) Make a call 
    2) Watch video
    3) Charge phone
 */

/*
Thing 2) Gaming laptop
5 properties:
    1) CPU-stress benchmark score (int)
    2) GPU-stress benchmark score (int)
    3) Number of ports (int)
    4) Duration needed to export video (float)
    5) Frames-per-second in game A (int)
3 things it can do:
    1) Launch game A
    2) Export video
    3) Connect a port
 */

/*
Thing 3) Public restroom with management
5 properties:
    1) Average number of users per week (float)
    2) Number of toilets (int)
    3) Number of urinals (int)
    4) Number of sinks (int)
    5) Volume of water used per week (double)
3 things it can do:
    1) Unclog toilets
    2) Clean facilities
    3) Replenish soap
 */

/*
Thing 4) Military Trunk Communications Vehicle
5 properties:
    1) Number of men assigned to vehicle (int)
    2) Fuel level percentage of vehicle (double)
    3) Maximum height of antenna (int)
    4) Configured frequency of radio systems (float)
    5) Net power consumption of electronics (float)
3 things it can do:
    1) Change radio frequency
    2) Deactivate comms systems during radio silence
    3) Jack up antenna to specified height
 */

/*
Thing 5) Barrel
5 properties:
    1) Length (inches) (float)
    2) Bullet diameter (mm) (float)
    3) Has adapter for muzzle attachment (bool)
    4) Barrel material (std::string)
    5) Barrel threading (mm) (int)
3 things it can do:
    1) Impart spin to bullet
    2) Guide bullet along specified vector
    3) Contain expanding gases to accelerate bullet
 */

/*
Thing 6) Scope
5 properties:
    1) Current magnification (float)
    2) Windage offset (arcseconds) (float)
    3) Elevation offset (arcseconds) (float)
    4) Parallax (ft) (float)
    5) Is illuminated (bool)
3 things it can do:
    1) Provide sight picture
    2) Illuminate sight picture
    3) Facilitate alignment of barrel to target
 */

/*
Thing 7) Magazine
5 properties:
    1) Maximum Capacity (int)
    2) Type (extended, drum, standard) (std::string)
    3) Material (plastic, metal) (std::string)
    4) Caliber (float)
    5) Current amount of bullets left (int)
3 things it can do:
    1) Store rounds for pewpew
    2) Feed rounds into feeding system
    3) Prevent loading of incorrect rounds
 */

/*
Thing 8) Bullet
5 properties:
    1) Caliber (float)
    2) Powder load (float)
    3) Powder brand (std::string)
    4) Bullet weight (grains) (float)
    5) Bullet type (HP, AP, FMJ, HE) (std::string)
3 things it can do:
    1) Engage rifling in barrel
    2) Accelerate when fired
    3) Impact target downrange
 */

/*
Thing 9) Stock
5 properties:
    1) Is skeletonized (bool)
    2) Is foldable (bool)
    3) Has cheekrest (bool)
    4) Has sling point (bool)
    5) Weight (g) (float)
3 things it can do:
    1) Increase control of recoil in gun
    2) Toggle folded/unfolded state
    3) Provide support to firer's head when ADS
 */

/*
Thing 10) Assault rifle
5 properties:
    1) Barrel
    2) Scope
    3) Magazine
    4) Bullet
    5) Stock
3 things it can do: 
    1) Discharge bullet
    2) Chamber bullet
    3) Eject empty magazine
 */


/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
