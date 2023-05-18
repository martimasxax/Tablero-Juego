#include "Enemigo.h"
#include <iostream>

#include "Enemigo.h"

Enemigo::Enemigo(int pHp, std::string pName, int pAttack, int pDefense, int pPosX, int pPosY)
{
    hp = pHp;
    name = pName;
    attack = pAttack;
    defense = pDefense;
    posX = pPosX;
    posY = pPosY;
}


int Enemigo::getHp() {
    return hp;
}

std::string Enemigo::getName() {
    return name;
}

int Enemigo::getAttack() {
    return attack;
}

int Enemigo::getDefense() {
    return defense;
}

int Enemigo::getPosX() {
    return posX;
}

int Enemigo::getPosY() {
    return posY;
}

void Enemigo::setHp(int php) {
    hp = php;
}

void Enemigo::setName(std::string pname) {
    name = pname;
}

void Enemigo::setAttack(int pattack) {
    attack = pattack;
}

void Enemigo::setDefense(int pDefense) {
    defense = pDefense;
}

void Enemigo::printStatus() {
    std::cout << "El nombre del enemigo es " << getName() << " y tiene una vida de " << getHp() << std::endl;
}
