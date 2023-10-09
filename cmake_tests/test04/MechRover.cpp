#include "MechRover.h"

MechRover::MechRover(std::string name, int ammo)
{
    std::cout << "Creating Mech. Constructor +++ \n";
    this->typeName = name;
    this->ammoCount = ammo;
}

MechRover::~MechRover()
{
    std::cout << "Destroying Mech. Constructor ---- \n";
}

int MechRover::fireWeapon(std::string weaponTypeName)
{
    std::cout << "Haaa!!! Shooting => " << weaponTypeName << " with " << this->ammoCount << " Ammo !!!\n";

    return 0;
}

void MechRover::movement()
{
    std::cout << "Mech model - " << this->typeName << " Procceeding \n";
}