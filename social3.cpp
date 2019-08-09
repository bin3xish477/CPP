/*
Author: Alexis Rodriguez
Date: April 17, 2019
Professor: G. Maryash
Assignment: LAB 11 Task B

This program implements the 


*/

#include<iostream>
#include<string>

using namespace std;

class Profile {
private:
	string username;
	string displayname;
public:
	Profile(string usrn, string dspn); //constructor
	Profile(); //default profile constructor
	string getUsername(); //return username
	string getFullName();//return changed name
	void setDisplayName(string dspn);
};


Profile::Profile() {
	username = ""; // default string initialization
	displayname = "";
}
Profile::Profile(string usrn, string dspn) {
	//setting private datamemebrs equal to parameter string values
	username = usrn;
	displayname = dspn;
}
string Profile::getUsername() {
	return username; // return username
}

string Profile::getFullName() {
	displayname = displayname + " (@" + username + ")"; // altar displayname
	return displayname; // return altared displayname
}

void Profile::setDisplayName(string dspn) {
	displayname = dspn; // set displayname equal to functions actual parameter
}

class Network {
private:
	static const int MAX_USERS = 20;
	int numUsers;                   
	Profile profiles[MAX_USERS]; 
	bool following[MAX_USERS][MAX_USERS];
	int findID(string usrn) {
		for (int i = 0; i < numUsers; i++) {
			if (profiles[i].getUsername() == usrn) {
				return i;
			}
		}
		return -1;
		}
public:
	Network(){
		numUsers = 0;
	    for (int i = 0; i < MAX_USERS; i++) {
		        for (int j = 0; j < MAX_USERS; j++) {
			        following[i][j] = false;
		        }
	    }
	}
	bool addUser(string usrn, string dspn) {
	int one = 0;
	while(one < usrn.length()){
		if(!isalnum(usrn[one])) {
		return false;
		}
	one++;
	}
	int two = 0;
	while(two < usrn.length()) {
		if(!isalnum(usrn[two])){
		return false;
		}
	two++;
	}
		
	if(findID(usrn) == -1 && usrn.length() != 0 && dspn.length() != 0 && numUsers < MAX_USERS){
		Profile newUser(usrn, dspn);
		profiles[numUsers++] = newUser;
		return true;
	}
		else{
			return false;
		}
	}
	bool follow(string usrn1, string usrn2){
		bool fol = false;
		int one = findID(usrn1); // functions finds username and returns position as an int
		int two = findID(usrn2);
		if(one != -1 && two != -1){
			following[one][two] = true;
			fol = true;
		}
		
		else{
			fol = false;
		}
	return fol;
	}
	void printDot(){
		cout << "digraph {" << endl;
		for(int i = 0; i < numUsers; i++){
			cout << "  \"@" << profiles[i].getUsername() << "\"" << endl;
		}
		for(int i = 0; i < numUsers; i++){
			for(int j = 0; j < numUsers; j++){
				if(following[i][j] == true){
					cout <<"  \"@" + profiles[i].getUsername() <<"\"" << " -> " 						<< "\"@" << profiles[j].getUsername() << "\"" << endl;
				}
			}
		}
		cout << "}" << endl;
	}
};

int main() {
    Network nw;
    // add three users
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    // make them follow each other
    nw.follow("mario", "luigi");
    nw.follow("mario", "yoshi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");
    nw.follow("yoshi", "luigi");

    // add a user who does not follow others
    nw.addUser("wario", "Wario");
    
    // add clone users who follow @mario
    for(int i = 2; i < 6; i++) {
        string usrn = "mario" + to_string(i);
        string dspn = "Mario " + to_string(i);
        nw.addUser(usrn, dspn);
        nw.follow(usrn, "mario");
    }
    // additionally, make @mario2 follow @luigi
    nw.follow("mario2", "luigi");

    nw.printDot();
}
