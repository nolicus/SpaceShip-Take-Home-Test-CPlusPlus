#include <cstdio>
#include <iostream>
#include <vector>
#include "inc/interface_SpaceShip.h"
#include "inc/Eagle5.h"
#include "inc/MillenniumFalcon.h"

using namespace std;

int main()
{
    printf("Starting Space Ship Battle - Creating Ships\r\n\r\n");
    MillenniumFalcon mf(ArmamentType_t::BLASTER_CANNON, PropulsionSys_t::WARP_DRIVE);
    Eagle5 e5(ArmamentType_t::RASPBERRY_JAM, PropulsionSys_t::HYPER_JET);

    MillenniumFalcon unholyMf(ArmamentType_t::RASPBERRY_JAM, PropulsionSys_t::WARP_DRIVE);
    Eagle5 unholyE5(ArmamentType_t::RASPBERRY_JAM, PropulsionSys_t::WARP_DRIVE);

    printf("... the battle commences ...\r\n");

    std::vector<Iface_SpaceShip *> starFleet;
    starFleet.push_back(&mf);
    starFleet.push_back(&e5);
    starFleet.push_back(&unholyMf);
    starFleet.push_back(&unholyE5);

    ArmamentType_t sweepingWeap;

    // Loop 10 times through the star fleet mowing the ships down with alternating weapons. 
    for (uint8_t i = 0; i < 10; i++)
    {
        // Switch ATTK Weapon Every Time
        if ((i % 2) == 0)
        {
            printf("*** ALL SHIPS HIT WITH BLASTER CANNON ***\r\n");
            sweepingWeap = ArmamentType_t::BLASTER_CANNON;
        }
        else
        {
            printf("*** ALL SHIPS HIT WITH RASPBERRY JAM ***\r\n");
            sweepingWeap = ArmamentType_t::RASPBERRY_JAM;
        }

        for (Iface_SpaceShip *shipPtr : starFleet)
        {
            shipPtr->TakeAHit(sweepingWeap);
            shipPtr->PrintStatus();
        }
    }

    int usrInput;
    printf("Space Battle Complete!\r\nPress ENTER to close\r\n");
    std::cin >> usrInput;
}