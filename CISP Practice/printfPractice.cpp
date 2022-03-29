#include <iostream>

using namespace std;

int main()
{
  //printf()
  
  string make = "Ford"; 
  string model = "Mustang"; 
  int year = 2021; 
  double price = 9999.000; 
  char for_sale = 'Y';
  
  printf("Your car is made by: %s","Ford");
  cout << endl;
  printf("Your car is made by: %s", make.c_str()); //c_str()
  cout << endl; 
  printf("Your car is a: %s %s","Ford","Mustang");
  cout << endl; 
  printf("Your car is a: %s %s", make.c_str(), model.c_str()); //only use c_str() 
  cout << endl; 
  
  printf("The year is: %d", year); //int
  cout << endl; 
  printf("The price is: %f", price); //double
  cout << endl; 
  printf("Is it for sale: %c", for_sale); //char
  cout << endl; 
  
  printf("The price is $%.2f", price); //setting precision  
  cout << endl; 
  printf("This precedes with blank spaces:%10s", "Ford"); //spaces
  cout << endl;
  printf("This precedes with blank spaces:%-10s", "Ford"); //spaces to left
  
  
  
}
