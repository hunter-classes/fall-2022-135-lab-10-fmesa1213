/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 10 A
Here, I wrote a program in which it implements two new functions
*/

int main() 
{
int h1, h2, m1, m2;
cout << "Enter first time: ";
cin >> h1 >> m1;
cout << "Enter second time: ";
cin >> h2 >> m2;


Time time1 = {h1, m1};
Time time2 = {h2, m2};

cout << "These moments of time are " << minutesSinceMidnight(time1) <<
" and " << minutesSinceMidnight(time2) << " after midnight." << endl
<< "The interval between them is " << minutesUntil(time1, time2) <<
" minutes." << endl;
  return 0;
}
