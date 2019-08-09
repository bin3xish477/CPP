#include<iostream>
using namespace std;

class Test
{
	int *ptr;
public:
	Test (int i=0) {ptr = new int(i);}
	void setValue (int i) {*ptr = i;}
	void print() {cout<< *ptr <<endl;}
	Test & operator = (const Test &t); //operator overloading
  ~Test() {delete ptr;}
};

Test & Test::operator = (const Test &t)
{
  // Check for self assignment
  if(this != &t)
	*ptr = *(t.ptr);
  return *this;
}

int main()
{
	Test t1(5);
	Test t2;
	t2 = t1;
	t1.setValue(10);
	t2.print();
	return 0;
}
