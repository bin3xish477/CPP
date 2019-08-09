/****************
  Classes in c++
  Alexis Rodriguez
  12 July 2019
*****************/
#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
/****************
  Class Player
*****************/
class Player
{
public:
  // attributes
  string name;
  int health;
  int xp;

  //methods
  void talk()
  {
    cout<< "Hello, i'm " << this->name << "." <<endl;
  }
  void is_dead()
  {
    if(this->xp == 0)
    {
      cout<< this->name << " is dead" <<endl;
    }
  }
};
/****************
  Class Account
*****************/
class Account
{
public:
  //attributes
  string name;
  double balance;

  //methods
  void deposit(double bal)
  {
    balance += bal;
    cout<< "In deposit" <<endl;
  }
  void withdraw(double bal)
  {
    balance -= bal;
    cout<< "In withdraw" <<endl;
  }
};
/****************
  main function
*****************/
int main()
{
  Player Frank;
  Frank.name = "Frank";
  Frank.health = 100;
  Frank.xp = 12;
  Frank.talk();

  Player *enemy = new Player; //Player object created on the heap
  // arrow access operator
  enemy->name = "Alex";
  enemy->health = 100;
  enemy->xp = 20;
  enemy->talk();

  Account frankAccount;
  frankAccount.name = "Frank";
  frankAccount.balance = 5000.00;
  frankAccount.deposit(500.00);
  frankAccount.withdraw(1500.00);
  delete enemy;
  return 0;
}
