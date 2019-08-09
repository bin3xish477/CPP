/*
 * Author: Alexis Rodriguez
 * Date: June 1st, 2019
 *
 * This programs, written in python, returns the first/last elements of a pair consisting of two integers.
 * And it attempts to answer the problem proposed by the Daily Coding Problem.
 *
 */

#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>

using namespace std;
//global variable
int SIZE = 2;
//function prototypes
int firstChar(int array[]);
int lastChar(int array[]);

int firstChar(int array[]) {
    return array[0];
}

int lastChar(int array[]) {
    return array[1];
}
//main function
int main() {
    int pair1[SIZE] = {3, 4};
    int pair2[SIZE] = {4, 6};
    int pair3[SIZE] = {10, 12};

    int one = firstChar(pair1);
    int two = firstChar(pair2);
    int three = firstChar(pair3);

    int four = lastChar(pair1);
    int five = lastChar(pair2);
    int six = lastChar(pair3);

    cout << "the first elements of each off the pairs are: " << endl;
    cout << one << endl;
    cout << two << endl;
    cout << three << endl;

    cout << "the last elements of each of the pairs are: " << endl;
    cout << four << endl;
    cout << five << endl;
    cout << six << endl;
    return 0;
}