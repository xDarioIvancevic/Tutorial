#include <iostream>
#include <vector>
#include <string>
#include "Account.h"

using namespace std;

class Player{
public:
    string name;
    int health;
    int xp;

    void talking(string text_to_say){
        cout << name << " says " << text_to_say << endl;
    }

    bool is_dead();
};



int main()
{
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 15;
    frank.talking("Hello");

    Player *enemy = new Player;
    (*enemy).name = "Borna";
    enemy->health = 12;
    enemy->talking("I will destroy you");
/*
    Player *p {nullptr};
    p = enemy;
    p->talking("I will destroy you");
*/
    //TRY TO MAKE A VECTOR OF OBJCETS PLAYER;

    vector <Player> players;
    Player Dario;

    Dario.name = "Dario";
    Dario.health = 100;

    players.push_back(Dario);
    players.at(0).talking("I am man");
    double money=10;

    Account x;
    x.set_balance(money);

    return 0;
}
