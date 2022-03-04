#include <iostream> 
#include <string> 

using namespace std; 

int main(){

   

 

    float first; 
    float second; 
    float sum; 
    float diff; 
    float prod; 
    float quot; 

    string f_name; 
    string l_name; 
    string full_name; 

    cout << "Please enter your first name ";
    cin >> f_name;  

    cout << "Please enter your last name "; 
    cin >> l_name; 

    full_name = f_name + " " + l_name; 

    cout << "Welcome, " << full_name << endl; 


    cout << "Please enter the first value ";
    cin >> first; 

    cout << "Please enter the second value "; 
    cin >> second; 

    sum = first + second; 
    diff = first - second; 
    prod = first * second; 
    quot = first / second; 

    cout << "Sum = " << sum <<  endl; 
    cout << "Difference = " << diff << endl; 
    cout << "Product = " << prod << endl; 
    cout << "Quotient = " << quot << endl; 
    
    if (first > second)
    cout << "First value is greater than the second one" << endl; 
    else 
    cout << "First value is less than the second one" << endl; 


    return 0; 
}
