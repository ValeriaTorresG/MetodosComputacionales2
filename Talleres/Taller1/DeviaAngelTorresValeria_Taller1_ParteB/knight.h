#ifndef KNIGHT_H
#define KNIGHT_H

#include "warrior.h"

class Knight : public Warrior {
    public:
        Knight() {
            health = 50;
            attack = 7;
        }
};

#endif