/*
Name: Alexis Rodriguez
Date: February 27, 2019
Instructor: G. Maryash
Assignment: Lab 5A-5F
this program creates a function with two intergers as formal parmeters and determines whether the numbers are divisible.
If they are, the program will return true, else, it will return false.
Also, checks if n is a prime number.
*/

#include <iostream>

using namespace std;

bool isDivisibleBy(int n, int d) {
	if (d == 0){
	       return false;
	}
	else{
	if (n%d == 0) {
		return true;
							//if true return true.
	}
	else {
		return false;
							//else if false return false.
	}
	}
}

bool isPrime(int n){
	int true_or_false = 0;
		if(n <= 1){ 
				//special case because we arent covering 0 and 1 in the loop.
			true_or_false == 0;
			}
			else{
	for(int i = 2; i <= n/2; i++){
				//looping through the remainders from the numbers between 2, n/2
		if(n%i == 0){
			true_or_false = 1; 
			break;
//break loop if the numbers remainder is one which signifies that the number is not prime because it is divisible by 2 and so the variable gets the value true.
			}
	}
		if (true_or_false == 0){
			return true;
		}
			else{
				return false;
				}
			}
}

int nextPrime(int n){
					//searching for the next prime number after the input value.
		if (n < 0){
		return 2;
	}
	else{
		n = n+1;
		while(true){
			if(isPrime(n)){
			return n;
			}
		n++;
		}
}
}

int countPrimes(int a, int b){
			//counting the number of primes from the first natural number to the second.
	int counter = 0;
	int c = a;
	while(c <= b){
		if(isPrime(c))
		counter++;
	c++;
	}

		return counter;
}
		
bool isTwinPrime(int n){
					//checking if the number is twin prime.
	if(n == 5){
		return true;
	}
	else{
	if(n <= 1){
		return false;
		}
		else if((isPrime(n)&&isPrime(n-2)) or ((isPrime(n)&&isPrime(n+2)))){
			return true;
			}
			else{
				return false;
				}
	}
}

int nextTwinPrime(int n){
					//checking for the following twin prime number.
	n+=1;
	while (true){
 		if (isTwinPrime(n)){
		return n;
	}
		n++;
	}

}
int largestTwinPrime(int a, int b){
				//checking for the largest twin prime in range from b to a.
	int c = b;
	while (c >=a){
	if (isTwinPrime(c))
	return c;
	c--;
	}
	return -1; 
}

int main()
{
	int a,b,n,d;
	cout << "Enter integers: " << endl;
	cin >> n >> d >> a >> b;
 					//storing input in variables.

	if (isDivisibleBy (n, d)) {
					//if the function call is == to true, cout << "yes".
		cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
						//if the function call is == to false, cout << "no".
		}
	if (isPrime (n)){ 
						//calling isPrime function in main.
		cout << "prime" << endl;
		}
		else{
			cout << "false" << endl;
			}
		cout << nextPrime(n) << endl;
						//calling nextPrime function in main function.
		cout << countPrimes(a,b) << endl;
						//calling countPrime function in main function.
	if (isTwinPrime (n)){
		cout << "Twin prime" << endl;
	}
		else{
		cout << "not twin prime" << endl;
		}
						//calling isTwinPrime function in main function.
	cout << nextTwinPrime (n) << endl;
						//calling nextTwinPrime function in main function.
	cout << largestTwinPrime (a, b) << endl;
	                    			//calling function largestTwinPrime in main function.
	return 0;
}
