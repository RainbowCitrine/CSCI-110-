#include <iostream> 

using namespace std; 

int main()
{
    
    double tuition = 10000; //Already paid the first year
    
    for (int i = 1; i <= 10; i++) //Start at one since you already started at 10000 for the first year 
    {
        tuition *= 1.05;
    }

    cout << "Tuition in ten years is " << tuition << endl; 
   
    double sum = tuition; //Total of the 10th year 
    for (int i = 11; i < 14; i++) //Wanted us to calculate the 4 years after 10th year 
    {
        
        tuition = tuition * 1.05; 
        sum += tuition * 1.05; 
       
        
         
    }
    
    cout << "The four year tuition in ten years is " << sum << endl; 

}
