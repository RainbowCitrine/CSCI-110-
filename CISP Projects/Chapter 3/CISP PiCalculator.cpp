#include <iostream> 
#include <iomanip> 
#include <cmath> 

using namespace std; 
double m(int num)
{
    double calc = 0; 
    double result = 0; 

    for (int i = 0; i < num; i++)
    {
        calc = calc + 4 * pow(-1, i) / (2 * i + 1); 
    }

    return calc; 

}
int main()
{


cout << setw(2) << left << "i" << setw(15) << right << "m(i)" << endl; 
for(int k = 1; k <= 901; k+=100)
{


cout << setw(2) << left << k << setw(15) << right <<  setprecision(4) << fixed <<  m(k) << endl;

}

}
