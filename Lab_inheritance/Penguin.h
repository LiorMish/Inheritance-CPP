//
// Created by liorm on 12/29/2021.
//

#ifndef LAB6_PENGUIN_H
#define LAB6_PENGUIN_H

#include <string.h>
#include <iostream>
#include "Creature.h"

class Penguin : public Creature{
public:
    Penguin(){};
    virtual ~Penguin(){};
    virtual string getType();
    virtual void fight(Creature &c);
};


#endif //LAB6_PENGUIN_H
