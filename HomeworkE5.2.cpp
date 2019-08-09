#include <iostream>

using namespace std;

int Compound_int( int p,int r, int n, int t){
	int Bank_bal = p*(1+r/n)^n*t;
	return Bank_bal;
}

int main()
{
	int p,r,n,t;

	cout << "Enter initial balance: " << endl;
	cin >> p;
	cout << "Enter interest rate: " << endl;
	cin >> r;
	cout << "Enter # of periods: " << endl;
	cin >> n;
	cout << "Enter time in years: " << endl;
	cin >> t;
	
	int result = Compound_int(p,r,n,t);
	cout <<"You have $" << result << " in your bank account." << endl;
	return 0;
}
