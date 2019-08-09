/*
Alexis Rodriguez
March 18th, 2019
G. Maryash
Lab 6C

This program takes the input of a string and keyword and encyrpts the letters so that the they are 
substituted by keywords values.*/

#include <iostream>
#include <string>

using namespace std;

string encryptVigenere(string plaintext, string keyword) {
// 
	int shift, plus = 0;
	char c;
	string vigenere = "";

	for(int i = 0; i < plaintext.length(); i++){ 
	c = plaintext[i];
		if(c >= 'a' && c <= 'z'){
		shift = keyword[plus]-'a'; // 'a' == 1;
		plus = (plus+1)%keyword.length(); // int plus increments by 1 and keyword in shift then receives a new array value. 
		c = 'a'+(c-'a'+26+shift)%26; // c gets 'a' remainder of (c-'a'+shift+26)%26	
		}
		
		if(c >= 'A' && c <= 'Z'){
		shift = keyword[plus]-'a'; // 'a' == 1;
		plus = (plus+1)%keyword.length();
		c = 'A'+(c-'A'+26+shift)%26;
		}
	vigenere += c;
	}
	return vigenere;	
}

int main()
{
	string plain_text, key_word;

	cout << "Enter plaintext: " << endl;
	getline(cin, plain_text);
	cout << "Enter keyword: " << endl;
	cin >> key_word;
	
	cout << "cipher text: " << encryptVigenere(plain_text, key_word) << endl;
	return 0;
}


