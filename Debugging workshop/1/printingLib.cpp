#include<iostream>
#include "printingLib.h"


void printWelcome()
{
    std::cout
            << " __        __   _                            _          _   _                                 _     _           _   _   _      "
            << std::endl
            << " \\ \\      / /__| | ___ ___  _ __ ___   ___  | |_ ___   | |_| |__   ___    __ _ _ __ ___  __ _| |_  | |__   __ _| |_| |_| | ___ "
            << std::endl
            << "  \\ \\ /\\ / / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\ | __/ _ \\  | __| '_ \\ / _ \\  / _` | '__/ _ \\/ _` | __| | '_ \\ / _` | __| __| |/ _ \\"
            << std::endl
            << "   \\ V  V /  __/ | (_| (_) | | | | | |  __/ | || (_) | | |_| | | |  __/ | (_| | | |  __/ (_| | |_  | |_) | (_| | |_| |_| |  __/"
            << std::endl
            << "    \\_/\\_/ \\___|_|\\___\\___/|_| |_| |_|\\___|  \\__\\___/   \\__|_| |_|\\___|  \\__, |_|  \\___|\\__,_|\\__| |_.__/ \\__,_|\\__|\\__|_|\\___|"
            << std::endl
            << "                                                                         |___/                                                 "
            << std::endl;
}

void printAttack(const std::string& name, int amount)
{
    std:cout << name << " attacked causing " << amount << " damage" << endl;
}

void printTookHit(const std::string& name, int amount)
{
    cout << name << " took a hit, losing " << amount << " health points" << std::endl;
}

void printResult(int hpLeft)
{
    if (hpLeft <= 0)
        std::cout << "pakku did not survived (o hp)" << std::endl;
    else
        std::cout << "pakku left with " << hpLeft << std::endl;
}

