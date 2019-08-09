/*
Name: Alexis Rodriguez
Date: February 12th, 2019
instructor: G. Maryash
Assigntment: Lab 3A
This program takes a reservior file and reads the input. It also prints the date and the East basin storage. 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <climits>
using namespace std;
int main()
{
	string date,user_date;
	double eastSt;
	double eastEl;
	double westSt;
	double westEl;
	
	cout << "Enter date: " << endl;
	cin >> user_date;
	
	ifstream file("Current_Reservoir_Levels.tsv");
	if (file.fail()) {
    	cerr << "File cannot be opened for reading." << endl;
    	exit(1); // exit if failed to open the file
	}
	string junk;
	getline(file, junk); 	// get one line from file
	
	while (file >> date >> eastSt >> eastEl >> westSt >> westEl) 
	{ 
	if (date == user_date){			//read columns from file
	cout << "East basin storage: " << eastSt << endl;
	}
	
	}
	
	file.close();
	return 0;
}
