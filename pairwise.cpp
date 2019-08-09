/*
Author: Alexis Rodriguez
Date: May 2nd, 2019
Instructor: G. Maryash
Assignment: Lab 12B

implements the function vector<int> sumPairWise(vector<int> &v1, vector<int> &v2) 
that returns a vector of integers whose elements are the pairwise sum of the elements 
from the two vectors passed as arguments.

*/

#include<iostream>
#include<vector>

using namespace std;

vector<int> sumPairWise(vector<int> &v1, vector<int> &v2) {
	vector<int> newVec;
	int i = 0, sum = 0;
	// if both vectors are empty, do the following,:
	if(v1.empty() && v2.empty()) {
		newVec = v1;
		return newVec;
	}
	// if either of the vector arrays are empty, do the following:
	if(v1.empty()) {
		newVec = v2;
		return newVec;
	}
	if(v2.empty()) {
		newVec = v1;
		return newVec;
	}

	while(i < v1.size() or i < v2.size()) {
		// reinitialize sum to 0 so that the sum of the first iteration is excluded
		sum = 0;
		if(i < v1.size() or i < v2.size()) {
		// if the above is true, sum gets v1[i]+v2[i] 
			sum += v1[i]+v2[i];
		// vector newVec gets the value of sum for each iteration
			newVec.push_back(sum);
		}
	i++;
	}
	return newVec;
}

int main() { 
	vector<int> v1{1,2,3};
	vector<int> v2{4,5};

	sumPairWise(v1, v2); // returns [5, 7, 3]
	return 0;
}
