#include <iostream>
#include <vector>

using namespace std;

int main() {
	const int b = 7;
	int arr[b] = {1,2,3,4,5,6,7};
	vector<int> myVector;
	myVector = {1,2,3,4,5,6,7};
	for(int i = 0; i < myVector.size(); i++) {
		cout << myVector[i] << " "; 
	}
	cout << endl;
	return 0;
}
