#include<iostream>
#include<string>
#include<vector>
#include<ctype.h>

using namespace std;

void shiftUpper(vector<string> &str) {
	vector<string> get;
	int i = 0;
	while(i < str.size()) {
		string hold = str[i];
		if(isupper(hold[0])) {
			get.push_back(str[i]);
		}
	i++;
	}
	i = 0;
	while(i < str.size()) {
		string hold = str[i];
		if(!isupper(hold[0])) {
			get.push_back(str[i]);
		}
		
	i++;
	}
	str = get;	
}
void printVec(vector<string> vec) {
		for(int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
}

int main() {
	vector<string> myVec = {"hate", "love", "Compassion", "selfish", "Sympathy", "Fear"};
	shiftUpper(myVec);
	printVec(myVec);
	cout << endl;
}
