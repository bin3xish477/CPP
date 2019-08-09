#include<iostream>
#include<string>

using namespace std;

string reverse(string str) {
    string new_str = "";
    int i = str.length();
    int j = 0;
    if(str.length() == 0) {
        return new_str;
    }
    else {
        return reverse(str.substr(j+1, i-1)) + str[0];
    }
}

int main () {
    string rec;
    cout << "Enter a string: " << endl;
    cin >> rec;
    cout << "The reverse order of your string is " << reverse(rec) << endl;
    return 0;
}