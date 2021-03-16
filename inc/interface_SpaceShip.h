#ifndef IFACE_SPACESHIP_H_
#define IFACE_SPACESHIP_H_

#include <cstdint>

using namespace std;

enum ArmamentType_t : uint8_t
{
    BLASTER_CANNON = 0,
    RASPBERRY_JAM,
};

enum PropulsionSys_t : uint8_t
{
    WARP_DRIVE = 0,
    HYPER_JET,
};

class Iface_SpaceShip
{
public:
    Iface_SpaceShip(ArmamentType_t guns, PropulsionSys_t prop);
    ~Iface_SpaceShip() = default;

    void PrintStatus();
    virtual void TakeAHit(ArmamentType_t hitType) = 0;
    virtual bool IsStillMoving() = 0;

protected:
    const char *mShipName{""};
    float mTopSpeed{0};
    ArmamentType_t mArmament;
    PropulsionSys_t mPropulsion;
};

#endif /* IFACE_SPACESHIP_H_ */