#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;

class Shallow
{
private:
  int *data;
public:
  void set_data_value(int d){*data = d;}
  int get_data_value(){return *data;}
  //constructor
  Shallow(int d);
  //copy constructor
  Shallow(const Shallow &source);
  //destructor
  ~Shallow();
};

Shallow::Shallow(int d)
{
  int *data = new int;
  *data = d;
}

Shallow::Shallow(const Shallow &source)
  :data(source.data)
{
  cout<< "Copy constructor - shallow copy" <<endl;
}

Shallow::~Shallow()
{
  delete data;
  cout<< "Destructor freeing data" <<endl;
}

void display_shallow(Shallow s)
{
  cout<< s.get_data_value() <<endl;
}

int main()
{
  /****************************************
  compiler return error message:
  Segmentation fault (core dumped)
  because there are more than references to
  to the data obj
  *****************************************/
  Shallow obj1{100};
  display_shallow(obj1);

  Shallow obj2{obj1};
  obj2.set_data_value(1000);

  return 0;
}
