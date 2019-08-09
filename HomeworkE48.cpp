/*
Name: Alexis Rodriguez 
Date: February 10th, 2019
Instructor: G. Maryash
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i, n;
	string name;
	
	cout << "Enter a word: ";
	cin >> name;
	for (i = 0; i < name.length(); i++){
	cout << name[i] << endl;
	}
	return 0;
}

