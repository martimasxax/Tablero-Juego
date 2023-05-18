#pragma once
#include "Enemigo.h"

class EnemigoFinal : public Enemigo {
private:
    bool fireAttack;
    int frozenAttack;

public:
    EnemigoFinal(int pHp, std::string pName, int pAttack, int pDefense, int pPosX, int pPosY, bool pFireAttack, int pFrozenAttack);

    bool getFireAttack();
    int getFrozenAttack();
    void setFireAttack(bool pFireAttack);
    void setFrozenAttack(int pFrozenAttack);

    void printAllStats();
};

