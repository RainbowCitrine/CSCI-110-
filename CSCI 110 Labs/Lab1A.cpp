#include <iostream> 
#include <iomanip>
using namespace std; 




int main(){

   float amount; 
   
   cout << "Please enter the original principal " << endl; 
   cin >> amount; 

   double interestOneYear = amount * 1.05; 
   double interestTwoYears = interestOneYear * 1.05; 
   double interestThreeYears = interestTwoYears * 1.05;
   
   double totalOne = interestOneYear; 
   double totalTwo = interestTwoYears; 
   double totalThree = interestThreeYears; 

   cout << "The new balance for the first year will be $" << totalOne << endl;
   cout << "The new balance for the second year will be $" << totalTwo  << endl; 
   cout << "The new balance for the third year will be $" << setprecision(2) << fixed << totalThree << endl; 


}
