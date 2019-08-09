/*
Author: Alexis Rodriguez
Date: May 2nd, 2019
Instructor: G. Maryash
Assignment: Lab 12B

implements the function vector<int> goodVibes(vector<int> v); that, given a vector of integers, returns a vector with only the positive integers in the same order.

*/

#include<iostream>
#include<vector>

using namespace std;

vector<int> goodVibes(vector<int>& v) {
	vector<int> hold;
	int s = v.size();
	int i = 0;
	while(i < s) {
		if(v[i] > 0) {
			hold.push_back(v[i]);
		}
	i++;
	}
	return hold;
}

int main () {
	vector<int> v{1,2,-1,3,4,-1,6};
	goodVibes(v); // returns [1,2,3,4,6]
	vector<int> get = goodVibes(v);
	for (int i = 0; i < get.size(); ++i) {
    		cout << get[i] << " ";
	}
}
