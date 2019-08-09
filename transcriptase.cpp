/*
Name: Alexis Rodriguez
Date: March 8th, 2019
Instructor: G. Maryash
Assignment: Project 1A

This program takes a DNA strand from the file "dna.txt" and translates it into the c
corresponding mRNA strand.

*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>

using namespace std;

char DNAbase_to_mRNAbase(char a){
// function converts DNA character to mRNA characters.
		if (toupper(a) == 'A'){
			return 'U';
		}
		if (toupper(a) == 'T'){
			return 'A';
		}
		if (toupper(a) == 'C'){
			return 'G';
		}
		if(toupper(a) == 'G'){
			return 'C';
		}

}
string DNA_to_mRNA(string inp_file){
// function for gets string and loops through all elements of string.
	string mRNA = "";
	for (int i = 0; i < inp_file.length(); i++){
		mRNA = mRNA + DNAbase_to_mRNAbase(inp_file[i]);//this concatenates all the elements being returned.
	}
	return mRNA;

}


int main()
{
	ifstream file("dna.txt");
		if (file.fail()){
			cerr << "File cannot be read, opended, or does not exist. \n";
			exit(1);
	}
	string strand;
	while (getline(file, strand)){
		cout << DNA_to_mRNA(strand) << endl;
	}
	file.close();
	return 0;
}
	
	
	
