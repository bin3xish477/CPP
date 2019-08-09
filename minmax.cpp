/*

Name: Alexis Rodriguez
Date: February 18th, 2019
instructor: G. Maryash
Assigntment: Lab 3B

This program takes the minimum and maximum storage from the East basin.


*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <climits>
using namespace std;
int main()
{
	string date;
	int counter = 0;
	double number, min = 100.00, max = -100.00;
	double eastSt;
	double eastEl;
	double westSt;
	double westEl;
	
	ifstream file("Current_Reservoir_Levels.tsv");
	if (file.fail()) 
	{
    	cerr << "File cannot be opened for reading." << endl;
    	exit(1); // exit if failed to open the file
	}
	string junk;
	getline(file, junk); // get one line from file
	
	while (file >> date >> eastSt >> eastEl >> westSt >> westEl) { 
	file.ignore(INT_MAX, '\n');
	if(eastSt < min){
	min = eastSt;
	}
	if(eastSt > max){
	max = eastSt;
	}
	
	cout << "minimum storage in East basin: " << min << " billion gallons" << endl; // minimum
	cout << "maximum storage in East basin: " << max << " billion gallons" << endl; // maximum
	}
	
	file.close();
	
	return 0;
}
