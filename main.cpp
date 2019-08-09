#include <iostream>
#include <iomanip>
#include <vector>
#include "Player.h"

using std::cout;
using std::endl;

void display_active_players()
{
  cout<< "Active players: " << Player::get_num_players() <<endl;
}
int main()
{
  display_active_players();
  Player Hero{"Hero"};
  display_active_players();
  return 0;
}
