/*
Author: Alexis Rodriguez
Date: April 5th, 2019
Professor: G. Maryash
Assignment: Lab 9 Task E

This program add a functions that creates, deletes, and coordinates objects dynamically.

*/

#include<iostream>
#include<cmath>

using namespace std;

class Coord3D // class containing three doubles
{
public: // public variables
	double x;
	double y;
	double z;
};

double length(Coord3D *p)
{
	double x1 = (*p).x;
	double y1 = (*p).y;
	double z1 = (*p).z;
	double space;
	space = sqrt(pow(x1, 2) + pow(y1, 2) + pow(z1, 2)); // math functions
	return space;
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
	if (abs(length(p1)) > abs(length(p2)))
	{
		return p1;
	}
	else{
		return p2;
	}
}

void move(Coord3D *ppos, Coord3D *pvel, double dt)
{
	ppos->x = ppos->x + pvel->x * dt;
	ppos->y = ppos->y + pvel->y * dt;
	ppos->z = ppos->z + pvel->z * dt;

}

Coord3D* createCoord3D(double x, double y, double z)
{
	Coord3D* allo = new Coord3D; // allocated memory for an object(pointer) of class Coor3d
	allo->x = x;
	allo->y = y;
	allo->z = z;

	return allo; // return object pointer which consist of three elements
}

void deleteCoord3D(Coord3D *p)
{
	delete p; // deallocate memory
	p = nullptr; //set dangling pointer to null pointer
}

int main()
{
	double x, y, z;
	cout << "Enter position: ";
	cin >> x >> y >> z;
	Coord3D *ppos = createCoord3D(x,y,z); // object pointer is equal to return value of function
    
	cout << "Enter velocity: ";
	cin >> x >> y >> z;
	Coord3D *pvel = createCoord3D(x,y,z); //object pointer is equal to return value of function

	move(ppos, pvel, 10.0); // calling function that computes new coordinates after 10 seconds

	cout << "Coordinates after 10 seconds: " 
	<< (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

	deleteCoord3D(ppos); // release memory
	deleteCoord3D(pvel);

	return 0;
}
