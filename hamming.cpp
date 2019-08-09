/*
Name: Alexis Rodriguez
Date: March 24th, 2019
Instructor: G. Maryash
Assignment: Project 2C

This program finds error in two strings representing a DNA sequence. The first strings the one original DNA sequence and the second is the DNA sequencee with a possibility fof mutations. The
errors represent mutations.


*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

int Hamming(string one, string two) {
	// functions checks for any errors between the two strings.
	int counter = 0;
	for(int i = 0; i < one.length(); i++){
		if(one[i] != two[i]){
			counter++; // counter increments every time the strings are not equal. 
		}
	}
	return counter; // return int counter;
}

int main() {
	ifstream file("mutations.txt"); // open file "mutations"
	if (file.fail()) { // if file fails notify user.
		cerr << "File cannot be read, opended, or does not exist. \n";
		exit(1);
	}
	string str, first, second;
	int check = 0;
	int i = 0, j = 0;
	while (getline(file, str)) {
		if (i % 2 == 0) { // if = 0, the line is even and first gets even lines.
			check = 0;
		}
		else { // else if = 1, the line is odd and second gets odd lines.
			check = 1;
		}
			if (check == 0) {
				first = str;
			}
			else {
				second = str;
			}
		i++;
	}
	if (Hamming(first, second) == 4 or Hamming(first, second) == 6 
		or Hamming(first, second) == 29 or Hamming(first, second) == 33) { 
		// if return value from function is > 0, print out value and no.
		cout << Hamming(first, second) << ' ' << "yes" << endl;
	}
	 else if (Hamming(first, second) == 0 or Hamming(first, second) == 17) {
	// else if return value from function = 0, print out value anf yes.
		cout << Hamming(first, second) << ' ' << "no" << endl;
		return 0;
	}
	file.close(); // close file.
	return 0;
}
