/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
    add a std::cout message in the constructor that prints out the name of the class being constructed.  
    When you run your code, you'll see the order that your objects are created in the program output. 
 
 2) For each User-Defined-Type:
        amend some of the member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of EACH of your user-defined types in the main() function.  
    You should have at least 12 different variables declared in main(), because you have written 12 different types (including the nested types)

 4) For each instantiated UDT: 
        call each of that instance's member functions.
        You're doing this to show that your code doesn't produce warnings when you call the functions that take arguments.
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int thing = 0; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    std::cout << "UDT being constructed!" << std::endl; //1) 
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << thing << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'thing' equal to 0? " << (foo.thing == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.




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
    Example::main();
    
    std::cout << "good to go!" << std::endl;
}
