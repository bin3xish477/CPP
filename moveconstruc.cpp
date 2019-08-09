#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;

class Move
{
private:
  int *data;
public:
  void set_data_value(int d){*data = d;}
  int get_data_value(){return *data;}
  //constructor
  Move(int d);
  //copy constructor
  Move(const Move &source);
  //Move constructor
  Move(Move &&source);
  //destructor
  ~Move();
};
//one arg constructor
Move::Move(int d)
{
  data = new int;
  *data = d;
}
//delegating copy constructor
Move::Move(const Move &source)
  : Move{*source.data}
{
  cout<< "Copy constructor - deep copy" <<endl;
}
//move constructor
Move::Move(Move &&source)
  : data{source.data}
{
  source.data = nullptr;
  cout<< "Move constructor - moving resource " << *data <<endl;
}
//class destructor
Move::~Move()
{
  if(data!= nullptr)
    cout<< "Destructor freeing data for " <<*data <<endl;
    else
      cout<< "Destructor freeing data for nullptr" <<endl;
  delete data;
}

void display_deep(Move s)
{
  cout<< s.get_data_value() <<endl;
}

int main()
{
  std::vector<Move> v;
  v.push_back(Move{10});
  v.push_back(Move{20});

  return 0;
}
