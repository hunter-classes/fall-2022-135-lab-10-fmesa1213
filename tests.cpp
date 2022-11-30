#include "main.cpp"
int random = rand();

TEST_CLASS(Time)
  TEST_METHOD(Time)
{
void printTime(Time time);
int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);
  Time addMinutes(Time time0, int min);
}
TEST_METHOD_INITIALIZE(Time)
{
int minutesSinceMidnight(rand());
int minutesUntil(rand(), rand());
}

 
TEST_CLASS(Movie)
  TEST_METHOD(Movie)
{
void printMovie (Movie m);
}
TEST_METHOD_INITIALIZE(Movie)
{
void printMovie (string randomName);
}
 

TEST_CLASS(Timeslot)
    TEST_METHOD(Timeslot)
{
void printTimeSlot (TimeSlot ts);
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie);
bool timeOverlap(TimeSlot ts1, TimeSlot ts2);
}
TEST_METHOD_INITIALIZE(Timeslot)
{
void printTimeSlot (TimeSlot ts);
TimeSlot scheduleAfter(rand(), string randomName);
bool timeOverlap(rand(),rand());
}

TEST_METHOD_CLEANUP(tests.o)
{
tests.o
}
