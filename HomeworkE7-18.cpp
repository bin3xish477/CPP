#include <iostream>

using namespace std;

class Triangle
{
	public:
	int x;
	int y;
	int z;
};

int compute_perimeter(Triangle *a)
{
	int x1,y1,z1,cal;
	x1 = (*a).x;
	y1 = (*a).y;
	z1 = (*a).z;
	cal = x1 + y1 + z1;
	return cal;
}
	
int main()
{
	cout << "Welcome to my triangle perimeter caculator!!" << endl;
	int get;
	Triangle point = {10, 15, 20};
	get = compute_perimeter(&point);
	cout << "the perimeter of the triangle is " << get << " !!" << endl; 
	return 0;
}
