#include <iostream>
#include <cmath>
using namespace std;
double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int numOfYears)
{

//futureInvesmentValue = investmentAmount * (1 + monthlyInterestRate) ^ numberofYears * 12

  return investmentAmount * pow(1 + monthlyInterestRate, numOfYears * 12);


}
int main()
{
  cout << "Enter loan amount, for example 120000.95: ";
  double loanAmount;
  cin >> loanAmount;
  cout << "Enter yearly interest rate, for example 8.25: ";
  double annualInterestRate;
  cin >> annualInterestRate;
  cout << "Years\tFuture Value" << endl;
  for (int i = 1; i <= 30; i++) // Start the loop
  {
    double futureValue = futureInvestmentValue(loanAmount, annualInterestRate / 1200, i);
    
  cout << "" << i << "\t" << (int)(futureValue * 100) / 100.0 << endl; //eliminates other variables rather than using set percision 


  }
  return 0;
}
