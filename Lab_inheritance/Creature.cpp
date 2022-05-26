//
// Created by liorm on 12/29/2021.
//

#include "Creature.h"

Creature:: Creature(){
    this->health_stat = MAX_HEALTH;
}

void Creature:: hurtHealth(int amount){
    if(this->health_stat - amount < 0)
    {
        cout << "\tI have died!" << endl;
    }
    else
    {
        this->health_stat = this->health_stat - amount;
        cout << "\t" << this->getType() << ": hurt for " << amount << " points" << endl;
    }
}
void Creature:: gainHealth(int amount){
    if (this->health_stat == MAX_HEALTH){
        return;
    }
    if (this->health_stat + amount > MAX_HEALTH){
        cout << "\t" << this->getType() << ": gained for " << (100-this->health_stat) << " points" << endl;
    }
    else{
        cout << "\t" << this->getType() << ": gained for " << amount << " points" << endl;
    }
}

Creature:: ~Creature(){

}

