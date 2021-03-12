#include "interface_SpaceShip.h"

Iface_SpaceShip::Iface_SpaceShip(float kessleRunTime, ArmamentType_t guns, 
    PropulsionSys_t prop) :
    mKesselRunTime(kessleRunTime),
    mArmament(guns),
    mPropulsion(prop), 
{
    if(mArmament == ArmamentType_t::BLASTER_CANNON && 
        mPropulsion == PropulsionSys_t::HYPER_DRIVE)
    {
        mShipName = "Millenium Falcon";
    }
    else if (mArmament == ArmamentType_t::RASPBERRY_JAM &&
             mPropulsion == PropulsionSys_t::HYPER_JET)
    {
        mShipName = "Eagle 5";
    }
    else
    {
        mShipName = "Unholy Offspring";
    }
}

/* Implement void PrintStatus() Here*/ 