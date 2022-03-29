#include <iostream> 

using namespace std; 

int main()
{
    
    double tuition = 10000; //Already paid the first year
    
    for (int i = 1; i <= 10; i++)
    {
        tuition = tuition * 1.05;
    }

    cout << "Tuition in ten years is " << tuition << endl; 
   
    double sum = tuition; //Total of the 10th year 
    for (int i = 2; i <= 4; i++)
    {
        
        tuition = tuition * 1.05;
        sum += tuition; 
       
        
         
    }
    
    cout << "The four year tuition in ten years is " << sum << endl;
    
}
