/*
Author: Alexis Rodriguez
Date: April 1st, 2019
Professor: G. Maryash
Assignment: Project 2D

Program explanation:
this program compares the strands created by project 2B and the mutated strands from
the file, "frameshift_mutations.txt". 

*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

char DNAbase_to_mRNAbase(char a)
{
// function converts DNA character to mRNA characters.
		if (toupper(a) == 'A')
		{
			return 'U';
		}
		if (toupper(a) == 'T')
		{
			return 'A';
		}
		if (toupper(a) == 'C')
		{
			return 'G';
		}
		if(toupper(a) == 'G')
		{
			return 'C';
		}
		else
		{
			return ' ';
		}

}
string DNA_to_mRNA(string inp_file)
{
// function for gets string and loops through all elements of string.
	string mRNA = "";
	for (int i = 0; i < inp_file.length(); i++){
		mRNA = mRNA + DNAbase_to_mRNAbase(inp_file[i]); // this concatenates all the elements being returned.
	}
	return mRNA;

}

string file_read(ifstream& infile, string search){
// function provided a way to read information that has a delimiter.
	string codon, amino_acid;
	infile.clear();
	infile.seekg(0);

	while(infile >> codon >> amino_acid){
	if(search.compare(codon) == 0){
	return amino_acid;
	}
    }
	return "";
}

void use_file_read(ifstream &file, string A){
// functions checks for name of amino acid and determines when translation begins and where it stops.
	string acid;
	int gostop = 0;
	for (int i = 0; i < (A.length()-2); i+=3){	
	acid = file_read(file, A.substr(i,3));
		if(acid.compare("Met") == 0){
			gostop = 1;
			cout << acid;
		continue; // continue which does the opposite of break. 
		}
		if(gostop == 1){
			if(acid.compare("Stop") == 0){
				break;
			}
		cout << "-" << acid;
		}
	}
}

	

int main(){
	string finding_amino_acid, found;

	ifstream file_c("codons.tsv");
		if(file_c.fail()){
			cerr << "File cannot be read, opended, or does not exist. \n";
			exit(1);
		}
		
	ifstream file("frameshift_mutations.txt");
		if (file.fail()){
			cerr << "File cannot be read, opended, or does not exist. \n";
			exit(1);
	}
	string strand, Amino;
	while (getline(file, strand)) {
	Amino = DNA_to_mRNA(strand);
	size_t found = Amino.find("AUG"); // size_t is a variable type that represents the size of a found in bytes.
	if (found != string::npos){ // if found is not equal to -1. **until the until the end of string.
	use_file_read(file_c, Amino.substr(found));
	}
	cout << endl;
	}
	
	file.close(); //close files
	file_c.close();
	
	return 0;
}
