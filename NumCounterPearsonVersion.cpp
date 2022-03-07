//This version is the correct version of what pearson had wanted, however due to pearson being super picky I had to modify this code before submitting. 

#include <iostream> 
#include <cmath> 

using namespace std; 


int main()
{
    int total = 0; 
    int sum = 0; 
    int i;
    int positive = 0; 
    int negative = 0; 
    float average; 
    
    
        cout << "Enter an integer, the input ends if it is 0: ";
        cin >> i; 
        


    while (i != 0)
    {
        

        if(i > 0)
        {
            positive++;  
            
    
        }
        else if(i < 0)
        {
            negative++; 
            
        }
        sum += i; 
        total++;
        cin >> i; 
          

    }

    if (negative + positive == 0)
    {
        cout << "No numbers were entered except for zero"  << endl; 
    }
    else
    {

    cout << "The number of positives is " << positive << endl; 
    cout << "The number of negatives is " << negative << endl; 
    cout << "The total is " << sum << endl; 
    average =  1.0 * sum /total; 
    cout << "The average is " << average << endl; 

    }
    
    
    
    
}
