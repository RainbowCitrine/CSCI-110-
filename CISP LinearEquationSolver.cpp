#include <iostream> 
#include <cmath> 

using namespace std; 

void solveEquation(double a, double b, double c, double d, double e, double f, double& x, double& y, bool& isSolvable)
{

    x = (e * d - b * f) / (a * d - b * c);
    y = (a * f - e * c) / (a * d - b * c); 

    if (a * d - b * c == 0)
    {
        isSolvable = false; 
    }

}

int main()
{
    double a2, b2, c2, d2, e2, f2, x2, y2; 
    bool isSolved;  
    cout << "Enter a, b, c, d, e, f: ";
    cin >> a2 >> b2 >> c2 >> d2 >> e2 >> f2;
    double& ref = x2; 
    double& ref2 = y2; 
    bool& ref3 = isSolved; 

    solveEquation(a2, b2, c2, d2, e2, f2, x2, y2, isSolved); 

    
    if(a2 * d2 - b2 * c2 == 0)
    {
        isSolved = false; 
        cout << "The equation has no solution." << endl; 
    }
    else 
    {
        cout << "x is " << x2 << " and y is " << y2;   
    }

}
