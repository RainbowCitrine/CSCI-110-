#include <iostream>

using namespace std;

int main()
{

int minutesInYear = 24 * 60 * 365; //Math for calculating the minutes in a year 

int minutes; 

cout <<"Enter the number of minutes: "; 

cin >> minutes; 

int totalYears = minutes / minutesInYear; // years calculation 
int totalDays = (minutes % minutesInYear) / (24 * 60); // Days calculation 

cout << minutes << " minutes is aprroximately " << totalYears << " years and " << totalDays << " days" << endl;
    return 0;
}
