#include <iostream> 
#include <cmath> 
#include <math.h> 
#include <string.h>
#include <cstring>

using namespace std; 

int main(){
    int month; 
    string monthWord; 
    int year; 
    int days; 
    

    cout << "Please enter the month" << endl; 
    cin >> month; 
    cout << "Please enter the year" << endl; 
    cin >> year; 

    

    switch(month){
        case 1: monthWord = "January"; days = 31;break;
        case 2: monthWord = "February"; 
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        days = 29;    
      else
        days = 28;  
        break; 
        case 3: monthWord = "March";  days = 31; break; 
        case 4: monthWord = "April"; days = 30; break; 
        case 5: monthWord = "May"; days = 31; break; 
        case 6: monthWord = "June";  days = 30; break; 
        case 7: monthWord = "July";  days = 31; break; 
        case 8: monthWord = "August"; days = 31; break; 
        case 9: monthWord = "September";  days = 30; break; 
        case 10: monthWord = "October";  days = 31; break;
        case 11: monthWord = "November"; days = 30; break; 
        case 12: monthWord = "December"; days = 31; break; 
        default: cout << "Please enter a valid month" << endl; break; 

    }
    
    

    
        
    
    cout << monthWord << " " << year << " has " << days << " days" << endl; 

       
    
        

}
