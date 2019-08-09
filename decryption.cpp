/*
Alexis Rodriguez
March 18th, 2019
G. Maryash
Lab 6D

This program takes the input of a string and keyword and encyrpts the letters so that the they are 
substituted by keywords values.*/

#include <iostream>
#include <string>

using namespace std;

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
string decryptCaesar(string ciphertext, int rshift){
// function decrypts caesar cipher.
	string str = "";
	char c;
	for (int i = 0; i < ciphertext.length(); i++){
	c = ciphertext[i];
		if(c >='A' && c<='Z'){
       			c= 'A'+(c-'A'+26-rshift) % 26;
		}
		if(c>='a' && c<='z'){
       			c= 'a'+(c-'a'+26-rshift) % 26;
		}
	str += c;
	}
   	return str;

}

string encryptVigenere(string plaintext, string keyword) {
// function encrypts string plaintext using vingenere cipher.
	int shift, plus = 0;
	char c;
	string vigenere = "";

	for(int i = 0; i < plaintext.length(); i++){ 
	c = plaintext[i];
		if(c >= 'a' && c <= 'z'){
		shift = keyword[plus]-'a'; // 'a' == 1;
		plus = (plus+1)%keyword.length(); // int plus increments by 1 and keyword in shift 								then receives a new array value. 
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

string decryptVigenere(string ciphertext, string keyword){
// function decrypts vigenere cipher back into plaintext. 
	string line = "";
	int shift, plus = 0;
	char c;

	for(int i = 0; i < ciphertext.length(); i++){ 
	c = ciphertext[i];
		if(c >= 'a' && c <= 'z'){
		shift = keyword[plus]-'a'; // 'a' == 1;
		plus = (plus+1)%keyword.length(); // int plus increments by 1 and keyword in shift 								then receives a new array value. 
		c = 'a'+(c-'a'+26-shift)%26; // c gets 'a' remainder of (c-'a'+shift+26)%26	
		}
		
		if(c >= 'A' && c <= 'Z'){
		shift = keyword[plus]-'a'; // 'a' == 1;
		plus = (plus+1)%keyword.length();
		c = 'A'+(c-'A'+26-shift)%26;
		}
	line += c;
	}
	return line;	
}

int main()
{
	int r;
	string caesar,plain_text, key;
	cout << "Enter plaintext: " << endl;
	getline(cin, plain_text);
	
	cout << "Enter shift: " << endl;
	cin >> r;
	cout << "Ciphertext: " << encryptCaesar(plain_text, r) << endl;
	
	cout << "Decrypted: " << decryptCaesar(encryptCaesar(plain_text,r), r) <<endl<<endl<<endl;

	cout << "Enter keyword: " << endl;
	cin >> key;
 	cout << "Ciphertext: " << encryptVigenere(plain_text, key) << endl;

	cout << "Decrypted: " << decryptVigenere(encryptVigenere(plain_text, key), key) << endl;
	
	return 0;
}	
