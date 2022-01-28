/*
Project 3 - Part 1b / 5
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

1)  Fill in #1 - 4 with a random UDT in plain english
    These 4 UDTs do not need to be related.
        a) For each plain-english UDT, write out 5 traits or properties and 3 things it can do
        b) remember: these properties will eventually become primitives.
        pick properties that can be represented with 'int float double bool char std::string'
*/

/*
 example:  
 
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - the amount of water used per week.
        - amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior

    Notice that I did not use "has a vacuum cleaner" or "Has eco-friendly cleaning supplies" as one of the properties
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "number of vacuum cleaners" and "number of eco-friendly cleaning supplies".  
    
    These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.

    In addition to the usual primitives (covered in Project 2), you can use 'std::string' to represent strings in this project.
 */

/*
Thing 1) Smartphone
5 properties:
    1) Size of screen
    2) Length of battery life
    3) Weight of phone
    4) Data storage capacity
    5) Time taken to charge to full battery
3 things it can do:
    1) Make a call 
    2) Watch video
    3) Charge phone
 */

/*
Thing 2) Gaming laptop
5 properties:
    1) CPU-stress benchmark score
    2) GPU-stress benchmark score
    3) Number of ports
    4) Duration needed to export video
    5) Frames-per-second in game A
3 things it can do:
    1) Launch game A
    2) Export video
    3) Connect a port
 */

/*
Thing 3) Public restroom with management
5 properties:
    1) Average number of users per week
    2) Number of toilets
    3) Number of urinals
    4) Number of sinks
    5) Volume of water used per week
3 things it can do:
    1) Unclog toilets
    2) Clean facilities
    3) Replenish soap
 */

/*
Thing 4) Military Trunk Communications Vehicle
5 properties:
    1) Number of men assigned to vehicle
    2) Fuel level percentage of vehicle
    3) Maximum height of antenna
    4) Configured frequency of radio systems
    5) Net power consumption of electronics
3 things it can do:
    1) Change radio frequency
    2) Deactivate comms systems during radio silence
    3) Jack up antenna to specified height
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
