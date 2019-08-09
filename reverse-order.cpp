/*

Name: Alexis Rodriguez
Date: February 18th, 2019
instructor: G. Maryash
Assigntment: Lab 3D

This program recieves the input for two dates and counts, in reverse order, the dates from the more recent dates to the the past older dates. 

/*

Name: Alexis Rodriguez
Date: February 18th, 2019
instructor: G. Maryash
Assigntment: Lab 3D

This program recieves the input for two dates and counts, in reverse order, the dates from the more recent dates to the the past older dates. 

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

	int counter = 0,i;
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

	file.ignore(INT_MAX, '\n');
	if(date <= date_2 && date >= date_1){
	cout << date << " " << westEl << endl; //prints the date as well as the corresponding value for the date.
	}

	}
	file.close(); // manually closing file
	return 0;
}
	
