/*
Author: Alexis Rodriguez
Date: April 10th, 2019
Prof: G. Maryash
Assignment: Lab 10

this program implements multiple functins that altar time.


*/


#include<iostream>
#include<cmath>

using namespace std;

class Time{
public:
	int h;
	int m;
};

int minutesSinceMidnight(Time time) { // object of class Time is time
	int min = 0;
	int j = time.h;
	int i = time.m;
	min = (60 * j) + i;
	return min;
}

int minutesUntil(Time earlier, Time later) { // objects of class Time are earlier and later
	int min = 0;
	if (earlier.h > later.h) {
		int j = earlier.h - later.h;
		int i = earlier.m - later.m;
		min = -1 * (60 * j) - i; // get difference in time intervals in minutes
	}
	else {
		int j = later.h - earlier.h;
		int i = later.m - earlier.m;
		min = (60 * j) + i; // get difference in time intervals in minutes
	}
	return min;
}

Time addMinutes(Time time0, int min) {
	time0.m = time0.m + min;
	int j = time0.m;
	if (j >= 60) {
		for (int i = 60; i <= j; i += 60) {
			time0.h++;
		}
		time0.m = (time0.m % 60);
	}
	else if (j < 60) {
		time0.h = time0.h;
		time0.m = time0.m;
	}
	if (time0.h > 23) {
		time0.h = time0.h % 24;
	}

	return time0; // return object time0
}

void printTime(Time time) {
    cout << time.h << ":" << time.m;
}

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER, SCIENCE_FICTION};

class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};

void printMovie(Movie mv) {
    string g;
    switch (mv.genre){
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
	case SCIENCE_FICTION : g = "SCIENCE FICTION"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

void printTimeSlot(TimeSlot ts) {
	Time rec = ts.startTime;
	Time get = addMinutes(rec, ts.movie.duration);
	printMovie(ts.movie);
	cout << " [starts at "; printTime(rec); 
	cout << ", ends by "; printTime(get); 
	cout << "] " << endl;
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
	Time rec = ts.startTime;
	Time get = addMinutes(rec, ts.movie.duration);
	ts = {nextMovie, get};
	return ts;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2); 
	bool t_or_f = 0;
	CONTINUE EDITING HERE!!!!
	
	return t_or_f;
}

int main() {
	cout << "Hello, World! This program is all about classes and enum types." << endl;
	Time first;
	Time second;
	cout << "Enter first time: " << endl;
	cin >> first.h >> first.m;
	cout << "Enter second time: " << endl;
	cin >> second.h >> second.m;

	int one = minutesSinceMidnight(first);
	int two = minutesSinceMidnight(second);
	int get = minutesUntil(first, second);
	cout << "These moments of time are " << one << " and " << two
		<< " minutes after midnight" << endl;
	cout << "The interval between these time periods are " << get << " minutes" << endl;

	Time Add = addMinutes({ 8, 10 }, 75); // calling function addMinutes
	printTime(Add); cout << endl; // print out new time
	
	// all objects of class Movie:
	Movie movie1 = {"Back to the Future", COMEDY, 116};
	Movie movie2 = {"Black Panther", ACTION, 134};
	Movie movie3 = {"Godfather", DRAMA, 175};
	Movie movie4 = {"Interstellar", SCIENCE_FICTION , 169};
	Movie movie5 = {"Good Will Hunting", DRAMA, 126}; 

	// all objects of class TimeSlot:
	TimeSlot morning = {movie1, {9, 15}};  
	TimeSlot daytime = {movie2, {12, 15}}; 
	TimeSlot evening = {movie3, {16, 45}};
	TimeSlot morning1 = {movie4, {10, 0}};
	TimeSlot evening1 = {movie5, {16, 30}};
	
	// calling function PrintTimeSlot
	printTimeSlot(morning);
	printTimeSlot(daytime);
	printTimeSlot(evening);
	printTimeSlot(morning1);
	printTimeSlot(evening1);
	
	Movie nex_movie = {"Pulp Fiction", DRAMA, 178};
	
	TimeSlot nex = scheduleAfter(morning1, nex_movie);
	printTimeSlot(nex);
	
	timeOverlap(morning, monring1);
	
	return 0;
}
