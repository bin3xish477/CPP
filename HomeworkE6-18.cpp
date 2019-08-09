#include<iostream>
#include<vector>

using namespace std;

vector<int> append(vector<int> a, vector<int> b) {	
	vector<int> newV;
	int i = 0;
	int s = a.size();
	// add elements of vector array a to vector array newV
	while(i < s) {
		newV.push_back(a[i]);
	i++;
	}
	// update i and s
	i = 0;
	s = b.size();
	// add elements of vector array b to vector array newV
	while(i < s) {
		newV.push_back(b[i]);
	i++;
	}
	// return new vector array
	return newV;
}

int main() {
	vector<int> A{1, 4, 9, 16};
	vector<int> B{9, 7, 4, 9, 11};
	append(A, B);
	// print out the vector returned by function append(A, B)
	vector<int> hold = append(A, B);
	for(int i = 0; i < hold.size(); i++) {
		cout << hold[i] << " ";
	}
	
	return 0;
}
