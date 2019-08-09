#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;

class Deep
{
private:
  int *data;
public:
  void set_data_value(int d){*data = d;}
  int get_data_value(){return *data;}
  //constructor
  Deep(int d);
  //copy constructor
  Deep(const Deep &source);
  //destructor
  ~Deep();
};
//one arg constructor
Deep::Deep(int d)
{
  data = new int;
  *data = d;
}
//delegating copy constructor
Deep::Deep(const Deep &source)
  :Deep{*source.data}
{
  cout<< "Copy constructor - deep copy" <<endl;
}
//class destructor
Deep::~Deep()
{
  delete data;
  cout<< "Destructor freeing data" <<endl;
}

void display_deep(Deep s)
{
  cout<< s.get_data_value() <<endl;
}

int main()
{
  Deep obj1{100};
  display_deep(obj1);

  Deep obj2{obj1};

  obj2.set_data_value(1000);
    display_deep(obj2);
  return 0;
}
