/*
Author: Alexis Rodriguez
Date: May 2nd, 2019
Instructor: G. Maryash
Assignment: Lab 12B

implements the function void gogeta(vector<int> &goku, vector<int> &vegeta) 
that appends elements of the second vector into the first and empties the second vector.

*/

#include<iostream>
#include<vector>

using namespace std;

void gogeta(vector<int> &goku, vector<int> &vegeta) {
	int i = 0;
	int s = vegeta.size();
	while(i < s){
		goku.push_back(vegeta[i]);
		vegeta.pop_back();
	i++;
	}
}

int main() {
	vector<int> v1{1,2,3};
	vector<int> v2{4,5};

	gogeta(v1, v2); // v1 is now [1,2,3,4,5] and v2 is empty.
	if(v2.empty()) {
		cout << "vector v2 is empty" << endl;
	}
		else {
			cout << "vector v2 is not empty" << endl;
		}
}
