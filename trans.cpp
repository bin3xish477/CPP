#include <iostream>
#include <fstream>
#include <string>
using namespace std;


string dictionary_read(ifstream &dict, string searchkey) {
string key, value;
dict.clear(); // reset error state
dict.seekg(0); // return file pointer to the beginning
while (dict >> key >> value) {
if (searchkey.compare(key) == 0) {
return value;
}
}
return "";
}

//function to convert character from DNA to RNA(finding complement)
char DNAbase_to_mRNAbase(char dna){

if(toupper(dna)=='A') //if A the convert to U
return 'U';
else if(toupper(dna)=='T') //if T the convert to A
return 'A';
else if(toupper(dna)=='C') //if C the convert to G
return 'G';
else if(toupper(dna)=='G') //if G the convert to C
return 'C';
else //Else return space
return ' ';
}

string DNA_to_mRNA(string input){
string output="";//initialising output to empty string


//looping through each value and converting character by character
for(int i = 0; i < input.size(); ++i) {
output=output+DNAbase_to_mRNAbase(input[i]);//adding converted to
}
//returning converted string
return output;
}

void get_amino_rep(ifstream &fin, string str) {
//ifstream fin("codons.tsv");
cout << " amino-acid chain: ";
string amino;
int start_flag=0;
for (int i=0; i<(str.size()-2); i=i+3){
//cout << i<< "-"<< str.substr(i, 3)<< ",";
amino = dictionary_read(fin, str.substr(i, 3));
if(start_flag == 0 && amino.compare("Met") == 0) {
start_flag = 1;
cout << amino;
continue;
}
if(start_flag == 1) {
if(amino.compare("Stop") == 0) {
// End the chain as Stop codon is found
break;
}
cout << "-" << amino;
}
}
//fin.close();
}

int main(){
//open file
ifstream fin("dna2b.txt");
ifstream fincodons("codons.tsv");
string strand;
string aa;
//if there is problem in opening file print error message
if (fin.fail()) {
cerr << "File dna2b.txt cannot be read, opened, or does not exist.\n";
exit(1);
}
  
if (fincodons.fail()) {
cerr << "File codons.tsv cannot be read, opened, or does not exist.\n";
exit(1);
}
  
//loop for each line untill end of file is reached.
while(getline(fin, strand)) {
cout << strand << " ";
aa=DNA_to_mRNA(strand);//calling function to convert DNA to RNA.
cout << aa;
size_t found = aa.find("AUG");
// If "AUG" codon found, start to find amino chain.
if (found != string::npos) {
get_amino_rep(fincodons, aa.substr(found));
} else {
cout << " - AUG codon not found.";
}
cout <<endl;
}
fin.close();//closing file
fincodons.close(); //closing codons file
return 0;
}
