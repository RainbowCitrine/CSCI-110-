#include <iostream> 
#include <iomanip>

using namespace std;

int main()
{

    float cost1, mpg1, maintance1, insurance1; 
    float cost2, mpg2, maintance2, insurance2; 

    int years = 10; 
    float miles_per_year = 15000; 
    float cost_per_gallon = 4; 

    cout << "Please enter the cost for Car One" << endl; 
    cin >> cost1; 
    cout << "Please enter the cost for Car two" << endl; 
    cin >> cost2; 
    cout << "Please enter the miles per galon for Car One" << endl; 
    cin >> mpg1; 
    cout << "Please enter the miles per galon for Car two" << endl;
    cin >> mpg2; 
    cout << "Please enter the maintenance for Car One" << endl; 
    cin >> maintance1; 
    cout << "Please enter the maintenance for Car Two" << endl; 
    cin >> maintance2;
    cout << "Please enter the insurance for Car One" << endl; 
    cin >> insurance1; 
    cout << "Please enter the insurance for Car Two" << endl; 
    cin >> insurance2;

    float gallons1 = miles_per_year / mpg1;
    float gallons2 = miles_per_year / mpg2; 
    float fcost1 = cost_per_gallon * gallons1;
    float fcost2 = cost_per_gallon * gallons2;
    float oCost1 = 10 * fcost1;
    float oCost2 = 10 * fcost2;

    float totalCost1 = cost1 + oCost1 + maintance1 + insurance1;
    float totalCost2 = cost2 + oCost2 + maintance2 + insurance2;



    cout << "Car 1: " << totalCost1 << endl; 
    cout << fixed << setprecision(1) << "Car 2: " <<(int)(totalCost2 * 10) / 10.0 << endl;
     if (totalCost1 < totalCost2)
        {
            cout << "Choose Car One" << endl;
        }
        else
        {
            cout << "Choose Car Two" << endl;
        }




}
