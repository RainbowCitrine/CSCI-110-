#include <iostream>
#include <math.h> 
#include <cmath> 

using namespace std; 

int main(){ 
    float a, b, c, d, e, f; 
    cout << "Please enter a, b c, d, e, and f: "; 
    cin >> a >> b >> c >> d >> e >> f; 

    float x = (e*d - b*f) / (a*d - b*c); 
    float y = (a*f - e*c) / (a*d - b*c);

    if (a*d - b*c == 0)
    cout << "This equation has no solution" << endl; 

    else 
    cout << "x is " << x << " and y is " << y; 

}
