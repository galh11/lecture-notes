#ifndef PRINTING_LIB_H
#define PRINTING_LIB_H
#include<string>

void printWelcome();
void printAttack(const std::string& name, int amount);
void printTookHit(const std::string& name, int amount);
void printResult(int hpLeft);

#endif

