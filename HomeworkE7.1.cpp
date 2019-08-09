#include <iostream> 

using namespace std;


void sort2(double* p, double* q){
	double *t;
	if (*p <= *q){
		return;
	}
	else{
		*t = *q;
		*q = *p;
		*p = *t;
	}
}

int main(){
	double x = 25, y = 15;
	sort2(&x, &y);
	cout << x << ' ' << y << endl;
	return 0;
}
	
