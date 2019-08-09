/*
Alexis Rodriguez
March 18th, 2019
G. Maryash
Lab 6B
This program asks the user for a string and an 
integer that the user wishes to use to apply a caesar cipher to the input string.
All special characters are saved and so are uppercase letters. */

#include <iostream>
#include <string>

using namespace std;

char shiftChar(char c, int rshift);
string encryptCaesar(string plaintext, int rshift);


char shiftChar(char c, int rshift) {
// function takes char c and shifts its value rshift times.
	if(c >='A' && c<='Z'){
       		c= 'A'+(c-'A'+26+rshift) % 26;
	}
	if(c>='a' && c<='z'){
       		c= 'a'+(c-'a'+26+rshift) % 26;
	}
   return c;
}
string encryptCaesar(string plaintext, int rshift) {
// functions loops through string elements and concatenates the new string created by function shiftChar.
	string plain_text = "";
	for (int i = 0; i < plaintext.length(); i++) {
		plain_text += shiftChar(plaintext[i], rshift);
	}
	return plain_text;
}

int main()
{
	int r;
	string plaintext;

	cout << "Enter plaintext: " << endl;
	getline(cin, plaintext); // using getline instead of cin becuase getline only stores data until " " is located while getline extracts the entire line.
	cout << "Enter shift: " << endl;
	cin >> r;

	cout << "ciphertext: " << encryptCaesar(plaintext, r) << endl;
	return 0;
}
