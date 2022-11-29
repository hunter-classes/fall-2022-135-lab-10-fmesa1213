/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 10 A,B,C,D,E
*/

//part A
#include<iostream>
using namespace std;
struct Time

{
int hour,min;
};

int minutesSinceMidnight(Time time)
{
return(time.hour*60+time.min);
}
int minutesUntil(Time earlier, Time later)
{
int h=later.hour-earlier.hour-1;
int mm1=60-earlier.min;
int mm2=later.min;
return(h*60+mm1+mm2);
}

int main()
{
Time t1,t2;
cout<<"Enter first time: ";
cin>>t1.hour>>t1.min;
cout<<"Enter second time: ";
cin>>t2.hour>>t2.min;
cout<<"These moments are "<<minutesSinceMidnight(t1)<<" and "<<minutesSinceMidnight(t2);
cout<<" minutes after mid night"<<endl;
cout<<"The interval between them is "<<minutesUntil(t1,t2)<<" minutes.";
 
  
  
  //part B:
Time time3 = {8, 10};
Time time4 = addMinutes (time3, 75);
cout << "After adding minutes: ";
printTime (time4);
cout <<endl;

  
  
  //part C:
Movie movie1 = {"Back to the Future", COMEDY, 116};
Movie movie2 = {"Black Panther", ACTION, 134};
Movie movie3 = {"Pulp Fiction", DRAMA, 154};
Movie movie4 = {"Fight Club", DRAMA, 139};

TimeSlot morning = {movie1, {9, 15}};
TimeSlot daytime = {movie2, {12, 15}};
TimeSlot evening = {movie2, {16, 45}};
TimeSlot daytime2 = {movie3, {14, 10}};
TimeSlot evening2 = {movie4, {20, 30}};

getTimeSlot (morning);
getTimeSlot (daytime);
getTimeSlot (evening);
getTimeSlot (daytime2);
getTimeSlot (evening2);

  
  
//part D:
Movie movie5 = {"Inception", ACTION, 148};
printTimeSlot (scheduleAfter(daytime2, movie5));

  
  
//part E:
if (timeOverlap (evening, daytime)) {
cout <<"true"<<endl;
}
else {
cout << "false"<<endl;
}
}

int minutesSinceMidnight(Time time1) {
return (time1.h * 60 + time1.m);
}

int minutesUntil(Time earlier, Time later) {
return (minutesSinceMidnight(later) - minutesSinceMidnight(earlier));
}

void printTime(Time time) {
cout << time.h << ":" << time.m;
}

Time addMinutes(Time time0, int min) {
Time timeNew;
timeNew.h = time0.h;
timeNew.m = time0.m;
int minutes = min;
while (minutes >= 60) {
timeNew.h++;
minutes -= 60;
}

if (time0.m + minutes >= 60) {
timeNew.h++;
minutes = timeNew.m + minutes - 60;
timeNew.m = minutes;
}
else
timeNew.m += minutes;
return timeNew;
}
void printMovie (Movie m) {
string g;
switch (m.genre) {
case ACTION : g = "ACTION"; break;
case COMEDY : g = "COMEDY"; break;
case DRAMA : g = "DRAMA"; break;
case ROMANCE : g = "ROMANCE"; break;
case THRILLER : g = "THRILLER"; break;
}
cout << m.title << " " << g << " (" << m.duration << " min)";
}

void printTimeSlot (TimeSlot ts) {

printMovie(ts.movie);
cout << " [starts at ";
printTime(ts.startTime);
cout << ", ends by ";
printTime(addMinutes(ts.startTime, ts.movie.duration));
cout << "]" << endl;
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie) {
TimeSlot timeNew;
timeNew.startTime = addMinutes(ts.startTime, ts.movie.duration);
timeNew.movie = nextMovie;
return timeNew;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2) {
if (minutesUntil(ts1.startTime, ts2.startTime) > 0) {
if (ts1.movie.duration > minutesUntil(ts1.startTime, ts2.startTime)) {
return true;
}
}
else {
if (ts2.movie.duration > minutesUntil(ts2.startTime, ts1.startTime)) {
return true;
}
}
return false;
}  

