#ifndef WATER_BENDER_H
#define WATER_BENDER_H

#include "printingLib.h"

class WaterBender
{
    public:
    WaterBender(const std::string& name);

    double applyWaterGunShot();
    void takeHit(double& amount);
    int getHealth() const;


    static const int MAX_HEALTH = 1000;

    int mHealth;
    std::string mName;
};

#endif 