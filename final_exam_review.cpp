/*
Author: Alexis Rodriguez
Date: 21 May 2019

This c++ file is all my answers for all the exams throughout the
CSCI 135 semester, including the mock final.

*/

/*
 * MIDTERM 1 ANSWERS:
 *1) if(1995 < year_published && year_published < 2006);
 *2) if(!paperback && (title[0] == 'A' || title[0] == 'T') && year_published > 2008);
 *3) if(!paperback && year_published == 2018 and title[title.length()-1] == 's');
 *4) skipped
 *5) output is: 0 1, 0 3;
 *6) at the end of the program s = 2
 *
 *7) void remove_e(string & sentence) {
        string new_string = "";
        for(int i = 0; i < sentence.length(); i++) {
            if(sentence[i] != 'e') {
                new_string += sentence[i];
            }
        }
    sentence = new_string;
}
 *8)
 * int main() {
    int side_len;
    cout << "please enter side length: " << endl;
    cin >> side_len;
    while(checkSideLength(side_len) == false){
        cout << "please enter valid side length: " << endl;
        cin >> side_len;
    }
    for(int i = 0; i < side_len; i++){
        for(int j = 0; j < side_len; j++){
            if(i%2 == 0) {
                cout << "o ";
            }
            else {
                cout << "x ";
            }
        }
        cout << endl;
    }
    return 0;
}

 * MIDTERM 2 ANSWERS:
 *1) int x;
 *   int *a = &x;
 *
 *2) int array[10];
 *   int *b = array;
 *
 *3) int *c = nullptr;
 *
 *4) int * d;
 *
 *5) int * e = new int;
 *   delete e;
 *
 *6) int * f = new int[2];
 *   delete[] p;
 *7) prints : 2000 1000
 *
 *8) const int COLUMNS = 3;
    bool all_values_identical(int values[][COLUMNS], int rows) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < COLUMNS; j++) {
            if(values[i][j] != values[0][0]) {
                return false;
            }

            }
        }
    return true;
}

 *9) int main() {
    int SIZE = 4;
    int *p = new int[SIZE]{0,0,0,0};
    for(int i = 0; i < SIZE; i++) {
        for (int j = 0; j <= i; j++) {
            cout << p[j];
        }
        cout << endl;
    }
    delete[] p;

    return 0;
}

 *10)class Section {
public:
    string course_name;
    int section_number;
};
class Student {
public:
    string name;
    Section * section;
};

int main () {
    Student one, two, three;
    Section a, b;

    a.course_name = "CSCI";
    a.section_number = 135;

    b.course_name = "Buddhism";
    b.section_number = 321;

    one.name = "Alex";
    one.section = &a;

    two.name = "Ransel";
    two.section = &a;

    three.name = "Martha";
    three.section = &b;

    cout << one.name <<" "<< one.section->course_name <<" "<< one.section->section_number << endl;
    cout << three.name <<" "<< three.section->course_name <<" "<< three.section->section_number<< endl;
    return 0;
}
 *
 *
 *
 *
 *
 *
 *
 * 11) enum PhaseOfWater {SOLID, LIQUID, GASEOUS};

    int main() {
    PhaseOfWater phase = SOLID;

    switch (phase) {
        case SOLID:
            cout << "ice";
            break;
        case LIQUID:
            cout << "water";
            break;
        case GASEOUS:
            cout << "steam";
            break;
    }
    cout << endl;
    return 0;
}
 *Final Mock Exam Answers:
 *1) prints out 90
 *2) prints out 6
 *
 *3)int determine_number_of_digits(int n) {
    // base case
    if(n < 10) {
        return 1;
    }
    else {
        return determine_number_of_digits(n/10) + 1;
    }
}
 *4) double replace_if_greater(double* p, double x) {
    double old = *p;
    if (x > old) {
        *p = x;
    }
    return old;
}

 *5) void reverse_in_place(string& s) {
    for(int i = 0; i < s.length()/2; i++) {
        char temp = s[s.length()-i-1];
        s[s.length()-i-1] = s[i];
        s[i] = temp;
    }
}
 *6) string replace(vector<string>& my_vector, string new_string);

int main () {
    string news = "alex";
    vector<string> vec = {"europe","mini", "landslide"};
    replace(vec, news);
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
    return 0;
}

string replace(vector<string>& my_vector, string new_string) {
    string old = my_vector[my_vector.size()-1];
    my_vector.pop_back();
    my_vector.push_back(new_string);
    return old;

}
 *7) using namespace std;

class Point {
public:
    double x;
    double y;
};
double compute_distance(Point a, Point b);

int main () {
    Point one, two;
    one.x = 10.13;
    one.y = 10.14;

    two.x = 20.23;
    two.y = 20.25;

    cout << "Distance between coordinates is : " << compute_distance(one, two) << endl;
    return 0;
}

double compute_distance(Point a, Point b){
    double dis;
    double m = b.x-a.x;
    double n = b.y-a.y;
    dis = sqrt(pow(m, 2) + pow(n, 2));
    return dis;
}
 *
 *
 *
 *
 *
 *
 *
 *
 */
#include<iostream>
#include<string>
#include<vector>
#include<ctype.h>
#include<iomanip>
#include<cmath>
#include<fstream>

using namespace std;

int main () {

    return 0;
}

