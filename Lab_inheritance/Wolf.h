//
// Created by liorm on 12/29/2021.
//

#ifndef LAB6_WOLF_H
#define LAB6_WOLF_H

#include <string.h>
#include <iostream>
#include "Creature.h"

class Wolf : public Creature{
public:
    Wolf(){};
    virtual ~Wolf(){};
    virtual string getType();
    virtual void fight(Creature &c);
};




#endif //LAB6_WOLF_H
