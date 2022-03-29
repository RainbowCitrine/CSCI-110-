#include <iostream> 
#include <cmath> 
#include <math.h>


using namespace std; 

int main(){
    int select;
    float degrees; 
    float minutes; 
    float seconds; 

    cout << "Please select 1 if you are only using degrees and minutes\nPlease select 2 if you are using degrees, minutes, and seconds" << endl; 
    cin >> select; 



    if (select == 1){
    cout << "Please enter the degrees: "; 
    cin >> degrees; 

    cout << "Please enter the minutes: ";
    cin >> minutes; 

    float calcMinutes = minutes / 60;
    float twoTotal = degrees + calcMinutes;
    float roundedTotalTwo = round ( twoTotal * 100.0) / 100.0; 

    cout << "The final answer in decimal form is: " << roundedTotalTwo << endl; 

    }
    else if (select == 2) {

    cout << "Please enter the degrees: "; 
    cin >> degrees; 

    cout << "Please enter the minutes: ";
    cin >> minutes; 

    float calcMinutes = minutes / 60;

    cout << "Please enter the seconds: ";
    cin >> seconds; 

    float calcSeconds = seconds / 3600;


    float threeTotal = degrees + calcMinutes + calcSeconds; 
    float roundedTotalThree = round( threeTotal * 1000.0 ) / 1000.0; 


    cout << "The final answer in decimal form is: " << roundedTotalThree << endl;  

    }
    else{
        cout << "Sorry that was not a valid selection please select either 1 or 2" << endl; 
    }


}
