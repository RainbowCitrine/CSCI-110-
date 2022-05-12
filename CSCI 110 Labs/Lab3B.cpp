#include <iostream> 

char choice; 

void prompt()
{

  do
  {

   
  double multiply; 
  double total; 
  std::cout << "Please enter the original amount of salary: "; 
  double salary; 
  std::cin >> salary; 
  double* ptr1 = &salary; 
  std::cout << "Now please enter the original percentage range: "; 
  double percentage; 
  std::cin>>percentage; 
  double* ptr2 = &percentage; 

  
  if(*ptr1 < 0 || *ptr2 < 0)
  {
      std::cout << "Error you cannot have your salary or percentage at a negative value" << std::endl; 
      std::cout << "Would you like to continue? (y/n): "; 
      char choice2; 
      std::cin >> choice2; 
      if(choice2 == 'n' || choice2 == 'N')
      {
          std::cout << "Exit!" << std::endl; 
          exit(0); 
      }
  }
  
  
  multiply = *ptr1 * *ptr2;
  

  double add = *ptr1 + multiply; 

  
     std::cout << "Please enter the new salary: "; 
     double sal;
     std::cin >> sal; 
     double* ptr4 = &sal; 
     std::cout << "Please enter the new percentage amount: ";
     double per;
     std::cin >> per;  
     double* ptr5 = &per; 

    double mul = *ptr4 * *ptr5; 
    double ad = *ptr4 + mul + add; 
    
    std::cout << "Your previous total was $" << add << ", while your new total is $" << ad << std::endl;
    std::cout << "Would you like to continue? (y/n): "; 
    std::cin >> choice; 

    if(choice != 'y' || choice != 'Y')
    {
        std::cout << "Exit!" << std::endl; 
        exit(0); 
    }
    
  }while(choice == 'y' || choice =='Y'); 
}

int main()
{
    
    prompt(); 
    
}
