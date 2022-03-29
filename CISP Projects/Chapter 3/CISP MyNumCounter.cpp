/* Unfortunately, even thuogh I kept getting the correct output to what pearson had wanted me to do it still counted this answer as wrong probably
   because when I was working on this project I had wanted my program to be a bit more interactive with the user whereas, pearson wanted to be 
   more straight forward to the point. 
*/

#include <iostream> 
#include <cmath> 
using namespace std; 
int main()
{
    int total = 1; // I set my counter to one to avoid a logical error since it will not count line 19 since it is outside of the loop therefore, this was my solution
    int i;
    int positive = 0; 
    int negative = 0; 
    float average; //Average is a float because we need to get a decimal for our answer 
    
    
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
        total++; 
        cout << "Enter an integer, the input ends if it is 0: ";
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
    cout << "The total is " << total << endl; 
    average =  1.0 * total / (negative + positive); //This is how you calculate averages 
    cout << "The average is " << average << endl; 
    }
    
}
