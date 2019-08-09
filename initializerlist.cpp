#include <iostream>

using namespace std;

class YearBorn {
private: 
	int x;
	int y;
	int z;
public: 
	YearBorn(int i, int j, int k);
	int getx() const {
		return x;
	}
	int gety() const { 
		return y;
	}
	int getz() const {
	    return z;
	}
};

YearBorn::YearBorn(int dayofbirthday = 0, int monthofbirthday = 0, int yearofbirthday = 0) 
//initializer list
: x(dayofbirthday), y(monthofbirthday), z(yearofbirthday){}

int main () {
	// object of YearBorn
	YearBorn myBirth(1, 10, 99);
	//calling member functions
	cout << myBirth.getx() << "/" << myBirth.gety() << "/" << myBirth.getz() << endl;
	return 0;
}
