#include "../inc/interface_SpaceShip.h"
#include <cstdio>

Iface_SpaceShip::Iface_SpaceShip(ArmamentType_t guns, PropulsionSys_t prop) : mArmament(guns),
                                                                              mPropulsion(prop)
{
    if (mArmament == ArmamentType_t::BLASTER_CANNON &&
        mPropulsion == PropulsionSys_t::WARP_DRIVE)
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

/* Implement PrintStatus() Here */
