/*
Name: Alexis Rodriuguez
Date: Feberuary 25th, 2019
Instructor: G. Maryash
Assignment: Lab 4F

This program prints the top right half of a square.
We achieve this by using nested loops.



*/
#include <iostream>
using namespace std;


int main()
{    
    int rows, width, height, spaces, stars; // declare values

    cout << "Enter width: " << endl;
    cin >> width;

    cout << "Enter height: " << endl;
    cin >> height;
       if(2*height > width+1) { 
          cout << "Impossible shape!" << endl;
	}
	else{
    	for(int row = 0; row < height; ++row) {
        	for (int col = height + row; col > 0; --col) {
           	 cout << " ";
       		 }
        for(int col = 0; col < (width - 2 * row); ++col) {
            cout << "*";

            spaces += 1;
            stars -= 2;
        }
        cout << endl;
	}}
	return 0;
}
