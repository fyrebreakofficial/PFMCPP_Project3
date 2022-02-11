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

struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;\

    struct Foot
    {
        int footSize = 4;
        int strideLength = 6;
        int stepCount = 0;

        void stepForward();
        int stepSize();
    };

    Foot leftFoot;
    Foot rightFoot;
    
    void run(int howFast, bool startWithLeftFoot);
    int stepForward();
    int stepSize();
};

void Person::Foot::stepForward()
{
    std::cout << "Imma step forward now";
}

int Person::Foot::stepSize()
{
    ++stepCount;
    return stepCount;
}

void Person::run(int runSpeed, bool startWithLeftFoot)
{
    if(startWithLeftFoot == true)
    {
        
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else
    { 
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    
    distanceTraveled = rightFoot.stepSize() + leftFoot.stepSize();
    runSpeed = distanceTraveled / (leftFoot.stepCount + rightFoot.stepCount);
}

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


struct Smartphone
{ 
    float screenSize = 5.0f;
    float batteryLife = 10.0f;
    std::string manufacturerBrand = "Apple";
    int maximumStorageCapacity = 64;
    int timeChargeToFull = 2;

    float makeCall(float callLength = 1.00f, float callConsumption = 3.0f);
    float playVideo(int quality = 1080, float videoLength = 3.5f, float videoConsumption = 5.0f);
    float chargeBattery(float chargeRate = 5.00f, int chargeDuration = 0); 
};

float Smartphone::makeCall(float duration, float powerConsumption)
{
    return duration * powerConsumption;
}

float Smartphone::playVideo(int definition, float duration, float powerConsumption)
{
    return definition * duration * powerConsumption;
}

float Smartphone::chargeBattery(float power, int duration)
{
    return power * duration;
}

struct GamingLaptop
{

    int cpuScore = 8000;
    int gpuScore = 8000;
    int portNumber = 4;
    float exportTestTiming = 15.30f;
    int fpsTestScore = 100;

    struct LaptopBottom
    {
        bool hasRGB = true;
        bool hasNumpad = true;
        int amountOfRam = 32;
        std::string cpuEquipped = "Ryzen 7 5800H";
        std::string gpuEquipped = "Nvidia RTX3070";

        bool turnLaptopOn(bool buttonPressed, bool powerPresent);
        void inputCharacter(std::string character, bool keyboardMalfunction = false);
        bool powerWithBattery(int batterySize, int powerConsumption, float duration);
    
    };

    void launchGameA(std::string quality = "Medium");
    int exportTestVideo(int quality = 720, int videoLength = 60);
    void connectPortToExternal(std::string portType = "USB", std::string deviceType = "External Drive");
};

bool GamingLaptop::LaptopBottom::turnLaptopOn(bool buttonPressed, bool powerPresent)
{
    return (buttonPressed && powerPresent);
}

void GamingLaptop::LaptopBottom::inputCharacter(std::string character, bool malfunction)
{
    if (malfunction == false)
    {
        std::cout << character << std::endl;
    }
    else
    {
        std::cout << "Hello your keyboard has broken\n";
    }
}

bool GamingLaptop::LaptopBottom::powerWithBattery(int capacity, int consumption, float duration)
{
    bool powerState;
    if (capacity > 0)
    {
        powerState = true;
        capacity -= (consumption * duration);
    }
    else
    {
        powerState = false;
    }
    return powerState;
}

void GamingLaptop::launchGameA(std::string quality)
{
    std::cout << "Launching Game A at " << quality << " settings\n";
}

int GamingLaptop::exportTestVideo(int quality, int videoLength)
{
    int gpuStrength = 0;
    return quality * videoLength * gpuStrength;
}

void connectPortToExternal(std::string type, std::string device)
{
    std::cout << "Device " << device << " detected and connected to " << type << " port.\n";
}

struct PublicRestroomWithManagement
{
    float averageUserNumber = 100.4f;
    int numberToiletsTotal = 5;
    int numberUrinalsTotal = 10;
    int numberSinksTotal = 7; 
    double waterUsagePerWeek = 70.0;

    void unclogToilets(int numberCloggedToilets);
    void cleanFacilities(std::string facilityIssuesToAddress);
    void replenishSoap(float currentPercentageOfSoapLeft = 1.00f);
};

void PublicRestroomWithManagement::unclogToilets(int totalToilets)
{
    std::cout << totalToilets << " toilets will be cleaned now.";
}

void PublicRestroomWithManagement::cleanFacilities(std::string issue)
{
    std::cout << "Order to address " << issue << " sent to manpower.\n";
}

void PublicRestroomWithManagement::replenishSoap(float percentageSoapLeft)
{
    float percentageToRefill = 100 * (1 - percentageSoapLeft);
    std::cout << "Order sent to refill " << percentageToRefill << "% of soap.\n";
}

struct MilitaryTrunkCommsVehicle
{
    int detachmentStrength = 3;
    double fuelPercentageLeft = 1.00;
    int maximumHeightAntenna = 10;
    float configuredFrequencyComms = 60.00f;
    float netPowerConsumption = 30.0f;

    struct DetachmentPersonnel
    {
        std::string rank = "CPL";
        bool qualifiedToManComms = false;
        int numberOfExperiencedMissions = 3;
        int hoursRationsLeft = 12;
        bool wellEnoughToContinue = true;

        void shiftSentry(int sentryDuration = 8, bool isWell = true);
        void prepareForArtilleryAttack(int coverDuration = 40, bool isShellscrapePresent = false);
        void consumeRations(int caloriesConsumed = 1000);
    };

    void changeRadioFrequency(float targetFrequency = 60.00f);
    void deactivateComms(bool isRadioSilence = true, bool isDangerPresent = false);
    void jackUpAntenna (bool isVehicleGrounded = true, int unitsToJackUp = 8);
};

void MilitaryTrunkCommsVehicle::DetachmentPersonnel::shiftSentry(int sentryDuration, bool isWell)
{
    std::string orderSendSentry = "no";
    if (isWell == true)
    {
        std::cout << "Sentry: shift activated for next " << sentryDuration << " hours.\n";
    }
    else
    {
        std::cout << "Soldier not well enough to carry out sentry duty!";
    }
}

void MilitaryTrunkCommsVehicle::DetachmentPersonnel::prepareForArtilleryAttack(int duration, bool isShellscrapePresent)
{
    if(isShellscrapePresent == true)
    {
        std::cout << "Taking cover in shellscrape for " << duration << " minutes\n";
    }
    else
    {
        std::cout << "Taking cover on ground for " << duration << " minutes\n";
    }
}

void MilitaryTrunkCommsVehicle::DetachmentPersonnel::consumeRations(int caloriesConsumed)
{
    std::cout << "Recovered " << caloriesConsumed << " calories for soldiers on field\n";
}

void MilitaryTrunkCommsVehicle::changeRadioFrequency(float targetFrequency)
{
    std::cout << "Changing communications frequency to " << targetFrequency << " MHz, refighting link\n";
}

void MilitaryTrunkCommsVehicle::deactivateComms(bool isRadioSilence, bool isDangerPresent)
{
    if (isDangerPresent == true)
    {
        std::cout << "Danger present! Deactivating communications systems.\n";
    }
    else
    {
        if (isRadioSilence == true)
        {
            std::cout << "Radio silence. Acknowledging command to deactivate communications systems.\n";
        }
        else
        {
            std::cout << "Deactivating communications systems. Trunk node integrity compromised.\n";
        }
    }
}

void MilitaryTrunkCommsVehicle::jackUpAntenna(bool isVehicleGrounded, int unitsToJackUp)
{
    if (isVehicleGrounded == true)
    {
        std::cout << "Proceeding to jack up " << unitsToJackUp << " units.\n";
    }
    else
    {
        std::cout << "Alert: Vehicle not grounded. Give command to ground vehicle before proceeding.\n";
    }
}


struct Barrel
{
    float length = 10.0f;
    float calibre = 5.56f;
    bool hasMuzzleThreading = true;
    std::string barrelMaterial = "steel";
    int threading = 20;

    void spinBullet(int threading, float acceleration, float calibre, std::string bulletType);
    void guideBullet(float acceleration, float length);
    void accelerateBullet(float length, float bulletWeight);
};

void Barrel::spinBullet(int thread, float acceleration, float bulletCaliber, std::string bulletType)
{
    float spinLevel = thread * acceleration * bulletCaliber;
    std::cout << spinLevel << bulletType;
}

void Barrel::guideBullet(float acceleration, float barrelLength)
{
    float guideScore = acceleration * barrelLength;
    std::cout << guideScore;
}

void Barrel::accelerateBullet(float barrelLength, float bulletWeight)
{ 
    float acceleration = barrelLength * bulletWeight;
    std::cout << acceleration;
}

struct Scope
{
    float currentMagnification = 4.0f;
    float windageOffset = 0.0f;
    float elevationOffset = 0.0f;
    float parallax = 0.0f;
    bool isIlluminated = true;

    bool provideSightPicture(float targetSize, int distance);
    bool illuminateSightPicture(int scopeBatteryCapacity, int environmentLightLevel); 
    bool alignmentBarrelToTarget(int elevationBarrel, int elevationTarget, int distance, float caliber); 
};

bool Scope::provideSightPicture(float targetSize, int distance) 
{
    return (targetSize / distance) > 100.0f;
}

bool Scope::illuminateSightPicture(int scopeBatteryCapacity, int environmentLightLevel)
{
    return (scopeBatteryCapacity > 0 || environmentLightLevel > 0);
}

bool Scope::alignmentBarrelToTarget(int elevationBarrel, int elevationTarget, int distance, float caliber)
{
    return (caliber * (elevationBarrel - elevationTarget)/distance > 50);
}

struct Magazine
{
    int maxCapacity = 30;
    std::string type = "standard";
    std::string material = "plastic";
    float caliber = 5.56f;
    int currentCapacity = 30;

    int holdRounds(int roundsLoaded, int roundsExpended); 
    int feedRounds(bool isChamberJammed);
    void filterIncorrectRounds(bool isCaliberCorrect); 
};

int Magazine::holdRounds(int roundsLoaded, int roundsExpended)
{
    return roundsLoaded - roundsExpended;
}

int Magazine::feedRounds(bool isChamberJammed)
{
    int roundInChamber = 0;
    if (!isChamberJammed)
    {
        roundInChamber = 1;
    }
    return roundInChamber;
}

void Magazine::filterIncorrectRounds(bool isCaliberCorrect)
{
    if (isCaliberCorrect == false)
    {
        std::cout << "Incorrect caliber loaded! Unable to fire.\n";
    }
}


struct Bullet
{
    float caliber = 5.56f;
    int powderLoad = 10;
    std::string powderBrand = "4198";
    float weight = 10.0;
    std::string type = "FMJ";

    void engageRifling(int threading, int acceleration);
    float accelerateWhenFired(int powderLoad, float caliber, float barrelLength); 
    int impactTarget(int distance, int elevation, int speed, int mass);
};

void Bullet::engageRifling(int threading, int acceleration)
{
    int riflingEngagement = threading * acceleration;
    std::cout << riflingEngagement;
}

float Bullet::accelerateWhenFired(int powderGrain, float bulletCaliber, float barrelLength)
{
    return powderGrain * bulletCaliber * barrelLength;
}

int Bullet::impactTarget(int distance, int elevation, int speed, int mass)
{
    return speed * mass / (distance * elevation);
}

struct Stock
{
    bool isSkeletonized = false;
    bool isFoldable = true;
    bool hasCheekrest = true;
    bool hasSlingPoint = true;
    float weight = 850.48f;

    float increaseControlRecoil(int recoilForce, float gunWeight); 
    void toggleFoldedUnfolded(bool isFoldable);
    void supportHeadWhenADS(bool isAiming = true, float pressureAgainstStock = 0.0f);
};

float Stock::increaseControlRecoil(int recoilForce, float gunWeight)
{
    return recoilForce + gunWeight;
}

void Stock::toggleFoldedUnfolded(bool isStockFoldable)
{
    bool toggleCommand = true;
    if (isStockFoldable == true)
    {
        if (toggleCommand == true)
        {
            std::cout << "Stock folded\n";
        }
        else
        {
            std::cout << "Fold command cancel\n";
        }
    }
    else
    {
        std::cout << "Unable to fold";
    }
}

void Stock::supportHeadWhenADS(bool isAiming, float pressureAgainstStock)
{
    float supportScore;
    if (isAiming == true)
    {
        supportScore = pressureAgainstStock * pressureAgainstStock;
    }
    else
    {
        supportScore = 0.0f;
    }
}

struct AssaultRifle
{ 
    Barrel standardAssault;

    Scope standardSAR;

    Magazine stanagStandard;

    Bullet standard556;

    Stock bullpup;
 
    void dischargeBullet(bool bulletInChamber, bool isJammed);
    void chamberBullet(bool magazineLoaded, std::string bulletType = "FMJ");
    void ejectEmptyMagazine(bool isEjectButtonPressed, bool isMagazineEmpty);
};

void AssaultRifle::dischargeBullet(bool bulletInChamber, bool isJammed)
{
    if (bulletInChamber == true && isJammed == false)
    {
        std::cout << "Bullet discharged";
    }
    else
    {
        std::cout << "Bullet not discharged";
    }
}

void AssaultRifle::chamberBullet(bool magazineLoaded, std::string bulletType)
{
    if (magazineLoaded == true)
    {
        std::cout << "Magazine loaded with " << bulletType;
    }
    else
    {
        std::cout << "Magazine not loaded";
    }
}

void AssaultRifle::ejectEmptyMagazine(bool isEjectButtonPressed, bool isMagazineEmpty)
{
    if (isEjectButtonPressed == true && isMagazineEmpty == true)
    {
        std::cout << "Ejecting empty magazine";
    }
}

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
