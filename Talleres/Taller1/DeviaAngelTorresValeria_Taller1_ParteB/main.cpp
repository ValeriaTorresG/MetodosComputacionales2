#include <iostream>
using namespace std;

#include "warrior.h"
#include "knight.h"

bool fight(Warrior& w1, Warrior& w2) {

    int attack1 = w1.attack;
    int attack2 = w2.attack;

    while (w1.is_alive() && w2.is_alive()) {
        w2.health -= attack1;
        if (w2.is_alive()) {
            w1.health -= attack2;
        }
    }
    return w1.is_alive();
}

int main ()
{
    cout << "Test 1:" << endl;
    Warrior husband;
    Knight wife;
    cout << fight(husband, wife) << endl;
    cout << husband.is_alive() << endl;
    cout << wife.is_alive() << endl;
    cout << "\n";
    cout << "Test 2:" << endl;
    Warrior chuck;
    Warrior bruce;
    Knight carl;
    Warrior dave;
    Warrior mark;
    cout << fight(chuck, bruce) << endl;
    cout << fight(dave, carl) << endl;
    cout << chuck.is_alive() << endl;
    cout << bruce.is_alive() << endl;
    cout << carl.is_alive() << endl;
    cout << dave.is_alive() << endl;
    cout << fight(carl, mark) << endl;
    cout << carl.is_alive() << endl;
    return 0;
}