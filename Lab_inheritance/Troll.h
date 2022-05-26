//
// Created by liorm on 12/29/2021.
//

#ifndef LAB6_TROLL_H
#define LAB6_TROLL_H

#include <string.h>
#include <iostream>
#include "Creature.h"

class Troll : public Creature{
public:
    Troll(){};
    virtual ~Troll(){};
    virtual string getType();
    virtual void fight(Creature &c);
};


#endif //LAB6_TROLL_H
