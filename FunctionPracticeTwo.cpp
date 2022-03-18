#include <iostream> 
using namespace std; 


int maximum(int x, int y); //forward declaration
void printMessage(); 
int main()
{



    int a, b; 
    cout << "Enter two numbers to find the greatest" << endl; 
    cin >> a >> b; 
    int c = maximum(a,b);
    cout << "greatest value is: " << c << endl; 
    cout << "another greates value out of 5,6 is: " << maximum(5,6); 
    cout << endl; 
    printMessage(); 

    return 0; 
}
int maximum(int x, int y)
{
    if (x > y)
    {
        return x; 
    }
    else
    {
        return y; 
    }
}

void printMessage()
{
    cout << "Hello!" << endl; 
}
