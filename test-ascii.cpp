/*
Name: Alexis Rodriguez
Date: March 6th, 2019
Instructor: G. Maryash
Assignment Lab 6A

This program will converts an input of string into its ACSII counterpart. 

*/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
	string line_text;
	cout << "Enter line of text: " << endl;
	getline (cin, line_text);
	
	for(int i = 0; i < line_text.length(); i++)
	cout << line_text[i] <<" "<< (int)line_text[i] << endl; //prints string variable and corresponding ASCII integer.
	return 0;
}
