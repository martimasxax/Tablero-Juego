#pragma once
#include <iostream>

class Enemigo {
private:
    int hp;
    std::string name;
    int attack;
    int defense;
    int posX; // Posición en X
    int posY; // Posición en Y

public:
    Enemigo(int pHp, std::string pName, int pAttack, int pDefense, int pPosX, int pPosY);

    int getHp();
    std::string getName();
    int getAttack();
    int getDefense();
    int getPosX(); // Getter para la posición en X
    int getPosY(); // Getter para la posición en Y

    void setHp(int php);
    void setName(std::string pname);
    void setAttack(int pattack);
    void setDefense(int pDefense);

    void printStatus();
};
