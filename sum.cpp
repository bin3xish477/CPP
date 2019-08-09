/*
Name: Alexis Rodriguez
Date: February 5th, 2019
instructor: G. Maryash
Assignment: sums.cpp

This program reads a sequence of integers and reports their sum.


*/

#include<iostream>
using namespace std;

int main()
{
    int num, sum = 0;

    while(cin >> num){
    sum = sum + num;
    }

    cout << sum << endl;
	return 0;
}
