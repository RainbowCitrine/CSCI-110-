#include <iostream> 
#include <cmath>


using namespace std; 

void DegreeToRadian(int degree, int radian)
{ 
    int gcd; 
    for (int i = 1; i <= degree && i <= radian; ++i) // Looping to find the gcf 
    {
        if (degree % i == 0 && radian % i == 0)
        {
             gcd = i; 
        }
    }

     degree =  degree /gcd; 
     radian =  radian /gcd; // Divide GCF 

    cout << "The answer is: " << degree << "π" << "/" << radian << endl; 
    cout << "If your degrees are negative simply add a - symbol before the fraction" << endl; 
    
    
} 

void RadianToDegree(int numerator, int denominator)
{
    int numerator2 = 180;
    int quotient = numerator2 / denominator;
    int totalTwo = numerator * quotient; 
    cout << "The degrees is: " << totalTwo << endl;  
    cout << "If your Radian is negative simply add a - symbol before the degrees" << endl; 

}


int main()
{

    cout << "Please enter either 1 for converting degrees into radians or 2 for converting radians to degrees: "; 
    int selection; 
    cin >> selection; 

if (selection == 1)
{

    
        int degree; 
        cout << "Enter the degrees: "; 
        cin >> degree; 
        cout << "Enter the denominator as 180 to follow the correct math formula: "; 
        int radian; 
        cin >> radian; 

     DegreeToRadian(degree, radian); 
}
else if(selection == 2)
{
    int NumeratorOne; 
    cout << "Please enter the numerator on the radian (not including π): ";
    cin >> NumeratorOne;  
    int DenominatorTwo; 
    cout << "Please enter the denominator on the radian: "; 
    cin >> DenominatorTwo; 

    RadianToDegree(NumeratorOne, DenominatorTwo);
    
}




}
