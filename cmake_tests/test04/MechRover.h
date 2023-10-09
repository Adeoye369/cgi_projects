#ifndef _MECH_R_
#define _MECH_R_

#include <iostream>
#include <string>

class MechRover
{
private:
    std::string typeName{};
    int ammoCount{};
    bool isAlive{};

public:
    MechRover(std::string, int);
    ~MechRover();
    void movement();
    int fireWeapon(std::string);
};

#endif // end __MECH_R_