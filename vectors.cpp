/*
Author: Alexis Rodriguez
Date: May 2nd, 2019
Instructor: G. Maryash
Assignment: Lab 12A

this program creates a vector via a function that creates a 
vector of a certain size and returns the vectors.

*/

#include<iostream>
#include<vector>

using namespace std;

const int n = 10;

vector<int> makeVector(int vec) {
	vector<int> get;
	for(int i = 0; i < n; i++) {
		get.push_back(i);
	}
	return get;
}

int main() {
	vector<int> makeVector(n);
}
