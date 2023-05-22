


#include <cstdlib>
#include "WaterBender.h"
#include "printingLib.h"

int myMain()
{
    printWelcome();
    WaterBender katara("katara");
    WaterBender pakku("pakku");

    pakku.takeHit(&katara.applyWaterGunShot());

    printResult(pakku.getHealth());
    return 0;

}