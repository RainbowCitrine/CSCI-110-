#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std; 




int main()
{
 
    int yearsNumber; 
    
    double loanAmount; 

    cout << "Loan Amount: "; 
    cin >> loanAmount; 

    cout << "Number of Years; "; 
    cin >> yearsNumber; 

    double monthlyInterest, payment, totalPayment; 

    cout << setw(13) << "Interest Rate" << setw(18) << "Monthly Total" << setw(18) << "Total Payment" << endl; //Set w spaces before the loop

    for (double annIn = 5.0; annIn <= 8.0; annIn += .125) //Annual Interest will start at 5.0 and add by .125
    {

        monthlyInterest = annIn / 1200; 

        payment = loanAmount * monthlyInterest / (1 - (pow(1 / (1 + monthlyInterest), yearsNumber * 12)));
        totalPayment = payment * yearsNumber * 12; 

        cout << setw(13) << fixed << showpoint << setprecision(3) << annIn << "%"; //Use set precision to get the deciaml rounded
        cout << setw(18) << fixed << showpoint << setprecision(2) << payment; //Use set precision to get the decimal rounded 
        cout << setw(18) << showpoint << setprecision(2) << totalPayment << endl; //Use set precision to get the deciaml rounded
        


    }

    return 0; 

}
