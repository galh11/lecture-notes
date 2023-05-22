
#include <cstdlib>
#include "WaterBender.h"
#include "flag_generator.h"

WaterBender::WaterBender(const std::string& name)
        : mName(name), mHealth(MAX_HEALTH)
{
}

int WaterBender::applyWaterGunShot()
{
    int power_int = generateFlag();

    printAttack(mName, power_int % MAX_HEALTH);
    return power_int % MAX_HEALTH;
}

void WaterBender::takeHit(int& amount)
{
    const int power_int = generateFlag();
    power_int = generateFlag(); //we really need this new second value

    if ((power_int % MAX_HEALTH) = amount)
        amount = 0;
    else if ((power_int % MAX_HEALTH) >= amount)
        amount *= 2;

    mHealth -= amount;
    printTookHit(mName, amount);
}

int WaterBender::getHealth() const
{
    return mHealth;
}

void printAttack(std::string name, int amount)
{
    std::cout << name << " water bender attacked causing " << amount << " damage" << endl;
}