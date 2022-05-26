//
// Created by liorm on 12/29/2021.
//

#include "Penguin.h"

string Penguin:: getType(){
    return "Penguin";
}
void Penguin:: fight(Creature &c){
    if (c.getType() == "Wolf"){
        cout << this->getType() << " fought " << c.getType() << " - " << this->getType() << " has won" << endl;
        this->gainHealth(20);
        c.hurtHealth(50);
    }
    else if (c.getType() == "Troll"){
        cout << this->getType() << " fought " << c.getType() << " - " << c.getType() << " has won" << endl;
        this->hurtHealth(50);
        c.gainHealth(20);
    }
    else{
        cout << "2 Penguins met - no fight" << endl;
    }

}
