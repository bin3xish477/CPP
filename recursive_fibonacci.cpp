/*
author : Alexis Rodriguez

program applies fibonacci recursion
 */


#include<iostream>
#include<cmath>

using std::cout;
using std::cin;
using std::endl;

unsigned long long fibonacci(unsigned long long);

unsigned long long fibonacci(unsigned long long n)
{
    if(n <= 1)     // base case
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);    // recursive case
    }
}

int main()
{
    unsigned long long fib;
    cout << "Welcome to my fibonnaci sequence f(n) calculator!" << endl;
    cout << "Enter a number to receive its fibonacci equivalent : " << endl;
    cin >> fib;

    cout << fibonacci(fib) << endl;
    return 0;
}