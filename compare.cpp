/*

Name: Alexis Rodriguez
Date: February 18th, 2019
instructor: G. Maryash
Assigntment: Lab 3c

This program takes two different dates as input and checks for each value in eastSt and westSt and identifies which value is higher.


*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <climits>
using namespace std;
int main()
{
	string date, date_1, date_2;
	cout << "Enter starting date: " << endl;
	cin >> date_1;
	cout << "Enter ending date: " << endl;
	cin >> date_2;

	int counter = 0;
	double number;
	double eastSt;
	double eastEl;
	double westSt;
	double westEl;

	ifstream file("Current_Reservoir_Levels.tsv");
	if(file.fail())	{
	cout << "Program cannot be opened for reading" << endl;
	
	exit(1);
	}
	string junk; // skip the first line
	getline(file, junk);
	
	while (file >> date >> eastSt >> eastEl >> westSt >> westEl)
	{

	file.ignore(INT_MAX, '\n'); // ignore the remaining columns
	if (date >= date_1 && date <= date_2){ // for every string date from the file between date_1 and date_2;
	cout << date << " " ;
	}
	if (eastEl> westEl){
	cout << "East" << endl;
	}
	else if( eastEl < westEl){
	cout << "West" << endl;
	}
	else {
	cout << "Equal" << endl;
	}}
	
	file.close();
	return 0;
}

