#ifndef IFACE_SPACESHIP_H_
#define IFACE_SPACESHIP_H_

#include <cstdint>

using namespace std; 

enum ArmamentType_t : uint8_t
{
    BLASTER_CANNON = 0,
    RASPBERRY_JAM,
    NONE  
};

enum PropulsionSys_t : uint8_t
{
    HYPER_DRIVE = 0,
    HYPER_JET,
    NONE
};

// Millennium Falcon 
// Eagle 5

class Iface_SpaceShip  
{
public: 
    Iface_SpaceShip(float kessleRunTime, ArmamentType_t guns, PropulsionSys_t prop); 
    ~Iface_SpaceShip() = default; 

    void PrintStatus(); 
    virtual void TakeAHit(uint16_t damage) = 0;
    virtual bool IsStillFlying() = 0;

private: 
    const char* mShipName   {""};
    float mKesselRunTime;
    ArmamentType_t mArmament;
    PropulsionSys_t mPropulsion;
};

#endif /* IFACE_SPACESHIP_H_ */