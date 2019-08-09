/************************
ALEXIS RODRIGUEZ
20 JULY 2019
C++ COPY CONSTRUCTOR
*************************/
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Player
{
private:
  std::string name;
  int health;
  int xp;
public:
  std::string get_name(){return name;}
  int get_health(){return health;}
  int get_xp(){return xp;}
  Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
  Player(const Player &source);
  ~Player(){cout<< "Destructor called for " + name <<endl;}
};
//condtructor initialization list
Player::Player(std::string name_val, int health_val, int xp_val)
  : name{name_val}, health{health_val}, xp{xp_val}
{
  cout<< "Three-args constructor for " + name <<endl;
}
//Copy Constructor
Player::Player(const Player &source)
  :name{source.name}, health{source.health}, xp{source.xp}
{
  cout<< "Copy constructor - made copy of: " << source.name <<endl;
}
//Player p is a replicant of the argument of class Player.
//The Player class is classed again, but this time the copy constructor
//will be called.
void display_player(Player p)
{
  cout<< "Name: " << p.get_name() <<endl;
  cout<< "Health: " << p.get_health() <<endl;
  cout<< "xp: " << p.get_xp() << endl;
}

int main()
{
  Player empty{"XXXXXXX", 100, 50};

  Player my_new_object{empty};
  display_player(empty);

  Player frank{"Frank"};
  Player hero{"Hero", 100};
  Player villian{"Villian", 100, 55};

  return 0;
}
