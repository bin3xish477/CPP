/*
Alexis Rodriguez
March 26, 2019
G. Maryash
Lab 7B

This program adds indents to a program that was initially
badly indented and creates proper indents.

*/

#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

string removeLeadingSpaces(string line);
int countChar(string line, char c);

string removeLeadingSpaces(string line){
// function removes all leading spaces from program.
	string late = "";
	char c;
	int len = line.length();
	for(int i = 0; i < len; i++){
		c = line[i];
		if(!isspace(c)){ //if not a space.
			while(i < len){
			late += line[i];
			i++;
			}
		}
	}
	return late;
}

int countChar(string line, char c){
//function looks for char '{' and '}'.
	int counter = 0;
	for(int i = 0; i < line.length(); i++){
		if(line[i] == c){
		counter++;
		}
		
	}
	return counter;
}
	
int main(){
	string get;
	int count = 0;
	while(getline(cin, get)){
		if(count == 2 and countChar(removeLeadingSpaces(get), '}')){
			count--;
		}
		else if (count == 1 and countChar(removeLeadingSpaces(get), '}')){
			count--;
		}
			for(int i = 0; i < count; i++){ // for loop for tab spaces.
           			cout << "\t";
				}
				cout << removeLeadingSpaces(get) << endl;
				if(countChar(removeLeadingSpaces(get), '{')){
					count++;
				}
	}
	return 0;
}

