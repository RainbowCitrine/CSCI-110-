/* Write a function that computes future investment value at a given interest rate for a specified number of years. 
The future investment is determined using the formula in Programming Exercise 2.23.
Use the following function header:
double futureInvestmentValue(
double investmentAmount, double monthlyInterestRate, int years)
For example,
futureInvestmentValue(10000, 0.05/12, 5) returns 12833.59.
*/ 

#include <iostream>  
#include <iomanip> 
#include <cmath> 

using namespace std; 

double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years) //local variables 
{

    return investmentAmount * pow(1 + monthlyInterestRate, years * 12);

}

int main()
{
    cout << "Amount invested: "; 
    double amount_invested; 
    cin >> amount_invested; 
    cout << endl; 
    cout << "Annual interest: "; 
    double annual_interest; 
    cin >> annual_interest; 
    cout << endl; 

    cout << "Years" << " " << "Future" << " " << "Value" << endl; 

    for (int i = 1; i <= 30; i++)
    {

        double futureValue = futureInvestmentValue(amount_invested, annual_interest / 1200, i);
        cout << setw(2) << left << i << " " <<  setprecision(2) << fixed<<(int)(futureValue * 100) / 100.0 << endl;  

    }



}
