/*
Author: ALEXIS RODRIGUEZ
COURSE: CSCI 150
INSTRUCTOR: G. MARYASH
ASSIGNMENT: LAB 13 TASK E

THIS PROGRAM Adds a new function bool nestedParens(string s);
which returns true if the string is a sequence of nested parentheses.

 */
#include<iostream>
#include<cmath>
#include<cctype>
#include<string>

using namespace std;

int sumArray(int *arr, int size) {
    int sum = 0;
    int i = 0;
    if(i < size) {
        sum += arr[size-1] + sumArray(arr, size-1);
    }
    return sum;
}

bool isAlphanumeric(string s) {
    bool t_f = false;
    int i = 0;
    if(s.length() == 0) {
        t_f = true;
    }
    else {
        if(isalnum(s[0])) {
            return isAlphanumeric(s.substr(i+1, s.length()));
        }
    }
    return t_f;
}

bool nestedParens(string s) {
    bool t_f = false;
    if(s.length() == 0) {
        t_f =  true;
    }
    else if(s.length() < 2) {
        t_f = false;
    }
    else {
        if (s[0] == '(' && s[s.length() - 1] == ')') {
            return nestedParens(s.substr(1, s.length() - 2)); //call function with substr from
                                                              //index 1 to the second to last index
        }                                                     //for each recursion
    }
    return t_f;
}

int main() {

    int size = 10;
    int *arr = new int[size]; //allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum1 = sumArray(arr, size); // Add all elements
    cout << "Sum is " << sum1 << endl;  // Sum is 43

    int sum2 = sumArray(arr, 5); // Add up first five elements
    cout << "Sum is " << sum2 << endl;  // Sum is 34

    delete[] arr;

    cout << isAlphanumeric("ABCD") << endl;        // true (1)
    cout << isAlphanumeric("Abcd1234xyz") << endl; // true (1)
    cout << isAlphanumeric("KLMN 8-7-6") << endl; // false(0)

    cout << nestedParens("((()))") << endl;      // true (1)
    cout << nestedParens("()") << endl;          // true (1)
    cout << nestedParens("") << endl;            // true (1)

    cout << nestedParens("(((") << endl;         // false (0)
    cout << nestedParens("(()") << endl;         // false (0)
    cout << nestedParens(")(") << endl;          // false (0)
    cout << nestedParens("a(b)c") << endl;       // false (0)
}