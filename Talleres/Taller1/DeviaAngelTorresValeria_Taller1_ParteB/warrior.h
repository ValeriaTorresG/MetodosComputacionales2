#ifndef WARRIOR_H
#define WARRIOR_H

class Warrior {
    public:
        int health;
        int attack;
        Warrior() {
            health = 50;
            attack = 5;
        }
        bool is_alive() {
            return health > 0;
        }
};

#endif