#include <iostream>
#include "MechRover.h"

using std::cout;

int main()
{
    // Using backet for destructors

    {
        MechRover mech1("RC12-HBORG", 34222);
        mech1.fireWeapon("RailGunner");
        mech1.movement();
    }

    cout << "END PROGRAM\n";
    return 0;
}