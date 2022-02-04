 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different from the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
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
struct Smartphone
{ 
    // Dimensions of screen diagonally
    float screenSize = 5.0f;
    // Length of battery life from full to empty
    float batteryLife = 10.0f;
    // Manufacturer of phone
    std::string manufacturerBrand = "Apple";
    // Data storage capacity of phone in gigabytes
    int maximumStorageCapacity = 64;
    // Time taken to charge battery from empty to full
    int timeChargeToFull = 2;

    // Facilitate making a call
    int makeCall(float callLength = 1.00f); // Returns the total amount of power consumed during call
    // Facilitate playing back a video
    int playVideo(int quality = 1080, float videoLength = 3.5f); // Returns the amount of energy consumed in playing video
    // Charge the phone battery
    int chargeBattery(float chargeRate = 5.00f, int chargeDuration = 0); // Returns the total percentage increase of battery charge phone has after charging
};
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
struct GamingLaptop
{
    // CPU stress-test benchmark score
    int cpuScore = 8000;
    // GPU stress-test benchmark score
    int gpuScore = 8000;
    // Number of available ports for connection
    int portNumber = 4;
    // Duration needed to export a test video in an editing software
    float exportTestTiming = 15.30f;
    // Frames-per-second when running Game A
    int fpsTestScore = 100;

    struct LaptopBottom
    {
        // Has RGB lighting (bool)
        bool hasRGB = true;
        // Has a numpad (bool)
        bool hasNumpad = true;
        // Amount of RAM (int)
        int amountOfRam = 32;
        // CPU equipped (std::string)
        std::string cpuEquipped = "Ryzen 7 5800H";
        // GPU equipped (std::string)
        std::string gpuEquipped = "Nvidia RTX3070";

        // Turn laptop on after activating power button
        bool turnLaptopOn(bool buttonPressed, bool powerPresent); // Returns whether laptop is able to be switched on
        // Input characters with keyboard
        void inputCharacter(std::string character, bool keyboardMalfunction = false);
        // Deliver power using housed battery
        void powerWithBattery(int batterySize, int powerConsumption, float duration);
    
    };

    // Launch Game A
    void launchGameA(std::string quality = "Medium");
    // Export test video
    int exportTestVideo(int quality = 720, int videoLength = 60); // Return time needed to export video from editing software
    // Facilitate connection via port to external appliance
    void connectPortToExternal(std::string portType = "USB", std::string deviceType = "External Drive");
};
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
struct PublicRestroomWithManagement
{
    // Average number of patrons using the toilet per week
    float averageUserNumber = 100.4f;
    // Total number of toilets available in room
    int numberToiletsTotal = 5;
    // Total number of urinals in room
    int numberUrinalsTotal = 10;
    // Total number of sinks in room
    int numberSinksTotal = 7; 
    // Average volume of water consumed per week by toilet facilities
    double waterUsagePerWeek = 70.0;

    // Order by management to unclog toilets
    void unclogToilets(int numberCloggedToilets);
    // Order by management to clean facilities
    void cleanFacilities(std::string facilityIssuesToAddress);
    // Order by management to replenish soap at sinks
    void replenishSoap(float currentPercentageOfSoapLeft = 1.00f);
};
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
struct MilitaryTrunkCommsVehicle
{
    // Number of men per detachment assigned to vehicle
    int detachmentStrength = 3;
    // Current percentage of maximum fuel left in vehicle
    double fuelPercentageLeft = 1.00;
    // Maximum height of fully jacked-up antenna
    int maximumHeightAntenna = 10;
    // Configured frequency in which communications are held through vehicle communications systems
    float configuredFrequencyComms = 60.00f;
    // Current total power consumption of communications electronics
    float netPowerConsumption = 30.0f;

    struct DetachmentPersonnel
    {
        // Rank of personnel
        std::string rank = "CPL";
        // Is qualified to man communications
        bool qualifiedToManComms = false;
        // Number of experienced missions
        int numberOfExperiencedMissions = 3;
        // Hours of rations left
        int hoursRationsLeft = 12;
        // Is well enough to continue mission
        bool wellEnoughToContinue = true;

        // Shift for sentry duty
        void shiftSentry(int sentryDuration = 8, bool isWell = true);
        // Prepare for artillery attack
        void prepareForArtilleryAttack(int coverDuration = 40, bool isShellscrapePresent = false);
        // Consume rations
        void consumeRations(int caloriesConsumed = 1000);
    };

    // Change radio frequency to facilitate comms
    void changeRadioFrequency(float targetFrequency = 60.00f);
    // Deactivate comms during standing orders in event of radio silence
    void deactivateComms(bool isRadioSilence = true, bool isDangerPresent = false);
    // Jack up antenna to specified height
    void jackUpAntenna (bool isVehicleGrounded = true, int unitsToJackUp = 8);
};
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
struct Barrel
{
    // Length in inches
    float length = 10.0f;
    // Calibre in bullet diameter
    float calibre = 5.56f;
    // Has adapter for muzzle attachment
    bool hasMuzzleThreading = true;
    // Barrel material
    std::string barrelMaterial = "steel";
    // Barrel threading rating
    int threading = 20;

    // Impart spin to bullet
    void spinBullet(int threading, float acceleration, float calibre, std::string bulletType);
    // Guide bullet along specified vector
    void guideBullet(float acceleration, float length);
    // Accelerate bullet under force of expanding gases
    void accelerateBullet(float length, float bulletWeight);
};
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
struct Scope
{
    // Current magnification (float)
    float currentMagnification = 4.0f;
    // Windage offset (arcseconds) (float)
    float windageOffset = 0.0f;
    // Elevation offset (arcseconds) (float)
    float elevationOffset = 0.0f;
    // Parallax (ft) (float)
    float parallax = 0.0f;
    // Is illuminated (bool)
    bool isIlluminated = true;

    // Provide sight picture
    bool provideSightPicture(float targetSize, int distance); // Returns whether target can be seen
    // Illuminate sight picture
    bool illuminateSightPicture(int scopeBatteryCapacity, int environmentLightLevel); // Returns whether target can be seen
    // Facilitate alignment of barrel to target
    bool alignmentBarrelToTarget(int elevationBarrel, int elevationTarget, int distance, float caliber); // Returns prediction of whether target can be hit
};
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
struct Magazine
{
    // Maximum Capacity (int)
    int maxCapacity = 30;
    // Type (extended, drum, standard) (std::string)
    std::string type = "standard";
    // Material (plastic, metal) (std::string)
    std::string material = "plastic";
    // Caliber (float)
    float caliber = 5.56f;
    // Current amount of bullets left (int)
    int currentCapacity = 30;

    // Store rounds for pewpew
    int holdRounds(int roundsLoaded, int roundsExpended); // Returns number of current rounds in capa
    // Feed rounds into feeding system
    int feedRounds(bool isChamberJammed);
    // Prevent loading of incorrect rounds
    void filterIncorrectRounds(bool isCaliberCorrect); 
};
/*
Thing 8) Bullet
5 properties:
    1) Caliber (float)
    2) Powder load (int)
    3) Powder brand (std::string)
    4) Bullet weight (grains) (float)
    5) Bullet type (HP, AP, FMJ, HE) (std::string)
3 things it can do:
    1) Engage rifling in barrel
    2) Accelerate when fired
    3) Impact target downrange
 */
struct Bullet
{
    // Caliber (float)
    float caliber = 5.56f;
    // Powder load (int)
    int powderLoad = 10;
    // Powder brand (std::string)
    std::string powderBrand = "4198";
    // Bullet weight (grains) (float)
    float weight = 10.0;
    // Bullet type (HP, AP, FMJ, HE) (std::string)
    std::string type = "FMJ";

    // Engage rifling in barrel
    void engageRifling(int threading, int acceleration);
    // Accelerate when fired
    int accelerateWhenFired(int powderLoad, float caliber, float barrelLength); // Returns maximum speed of bullet at end of barrel
    // Impact target downrange
    int impactTarget(int distance, int elevation, int speed, int mass);// Returns predicted speed of bullet when hitting target downrange
};
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
struct Stock
{
    // Is skeletonized (bool)
    bool isSkeletonized = false;
    // Is foldable (bool)
    bool isFoldable = true;
    // Has cheekrest (bool)
    bool hasCheekrest = true;
    // Has sling point (bool)
    bool hasSlingPoint = true;
    // Weight (g) (float)
    float weight = 850.48f;

    // Increase control of recoil in gun
    int increaseControlRecoil(int recoilForce, float gunWeight); // Returns percentage of recoil control increase
    // Toggle folded/unfolded state
    void toggleFoldedUnfolded(bool isFoldable); //
    // Provide support to firer's head when ADS
    void supportHeadWhenADS(bool isAiming = true, float pressureAgainstStock = 0.0f);
};
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
struct AssaultRifle
{ 
    // Barrel
    Barrel standardAssault;

    // Scope
    Scope standardSAR;

    // Magazine
    Magazine stanagStandard;

    // Bullet
    Bullet standard556;

    // Stock
    Stock bullpup;
 
    // Discharge bullet
    void dischargeBullet(bool bulletInChamber, bool isJammed);
    // Chamber bullet
    void chamberBullet(bool magazineLoaded, std::string bulletType = "FMJ");
    // Eject empty magazine
    void ejectEmptyMagazine(bool isEjectButtonPressed, bool isMagazineEmpty);
};

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
