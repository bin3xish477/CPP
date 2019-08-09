#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	int i;
	string he, Wo, file;
	cout << "Enter file name: " << endl;
	cin >> file;

	
	ofstream outfile(file);
	cout << "Enter message:  " << endl;
	cin >> he >> Wo;
	outfile << he + " " + Wo << endl;
	outfile.close();
	
	ifstream infile(file);
	
	getline(infile, he);
	getline(infile, Wo);
	cout << he << Wo << endl;
	infile.close();
	return 0;
}
