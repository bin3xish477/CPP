/*
Alexis Rodriguez
March 26, 2019
G. Maryash
Lab 7A

This program takes a program and removes any unneccessary spaces.

*/

#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

string removeLeadingSpaces(string line);

string removeLeadingSpaces(string line){
// function removes all leading spaces from program.
	string late = "";
	char c;
	int len = line.length();
	for(int i = 0; i < len; i++){
		c = line[i];
		if(!isspace(c)){
		while(i < len){
		late += line[i];
		i++;
		}
		}
	}
	return late;
}
	

int main(){
	string get;
	
	while (getline(cin, get)){ // getline line from file.
		removeLeadingSpaces(get);
		cout << removeLeadingSpaces(get) << endl;
	}
	return 0;
}
