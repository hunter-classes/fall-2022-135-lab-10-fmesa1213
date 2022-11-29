#include <iostream>
#include <string>

using namespace std;

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Time {
public:
int h;
int m;
};

class Movie {
public:
string title;
Genre genre; 
int duration; 
};

class TimeSlot {
public:
Movie movie; 
Time startTime; 
};

void printTime(Time time);
int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);

Time addMinutes(Time time0, int min);

void printMovie (Movie m);
void printTimeSlot (TimeSlot ts);

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie);

bool timeOverlap(TimeSlot ts1, TimeSlot ts2);


