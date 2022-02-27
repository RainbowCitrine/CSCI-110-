#include <iostream> 
using namespace std; 




int main(){

   double amount; 
   double yearOneInterest = .15 * 1;
   double yearTwoInterest = .15 * 2;
   double yearThreeInterest = .15 * 3;
   cout << "Please enter $10,000 as the initial principal " << endl; 
   cin >> amount; 
   double calculateInterestOne = amount * yearOneInterest;
   double calculateInterestTwo = amount * yearTwoInterest; 
   double calculateInterestThree = amount * yearThreeInterest;
   double totalOne = amount + calculateInterestOne;
   double totalTwo = amount + calculateInterestTwo; 
   double totalThree = amount + calculateInterestThree;  
   cout << "New balance = $" << totalOne << " for 1 year." << endl;
   cout << "New balance = $" << totalTwo << " for 2 years." << endl; 
   cout << "New balance = $" << totalThree << " for 3 years." << endl; 
}
