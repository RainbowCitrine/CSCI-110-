#include <iostream> 
using namespace std; 

int add(int a, int b)
{
    return a + b; 
}


int subtract(int a, int b)
{
    return a - b; 
}

int multiply(int a, int b)
{
    return a * b;
}
double divide(double a, double b)
{
    return a / b; 
}
int main() 
{
    cout << "Enter two numbers: "; 
    int x, y; 
    cin >> x >> y; 
    cout << add(x, y);
    cout << endl; 
    cout << subtract(x,y);
    cout << endl; 
    cout << multiply(x,y);
    cout << endl; 
    cout << divide(x,y); 
    cout << endl; 
}
