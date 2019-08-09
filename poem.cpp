/*
Author: Alexis Rodriguez
Date: April 5th, 2019
Professor: G. Maryash
Assignment: Lab 9 Task D

In this program we are being asked to fix the program which initially crashes our computer
because it runs out of memory quickly. We must delete the dynamiccally allocated memory 
when it is no longer needed.

*/

#include <iostream>
using namespace std;

string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();
	cout << *p;
	
        delete p; // assume that the poem p is not needed at this point

    }
}
