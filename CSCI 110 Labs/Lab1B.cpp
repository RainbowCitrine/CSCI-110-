#include <iostream> 
#include <cmath> 



using namespace std; 

int main()

{

    int ftime; 
    int stime; 

    cout << "Please enter the first time: ";
    cin >> ftime; 

    cout << "Please enter the second time: ";
    cin >> stime; 

if (ftime < stime)
{

    int totalTime = stime - ftime;

    int hours = totalTime / 100; 
    int minutes = totalTime % 100; 
    cout << "The difference between" << " 0" << ftime << " hours " << "and " << stime << " hours " << "is " << hours << " hours and " << minutes << " minutes"; 



}
else if (ftime > stime)
{
   
    int totalTime = stime - ftime; 
    int hours = totalTime / 100; 
    int hoursTwo = hours + 23;
    int minutes = totalTime % 100; 
    int minutesTwo = minutes * -1;
    cout << "The difference between " << ftime << " hours " << "and 0" << stime << " hours " << "is " << hoursTwo << " hours and " << minutesTwo << " minutes"; 

}

return 0; 

}





