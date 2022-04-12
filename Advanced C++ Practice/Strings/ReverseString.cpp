/*
Write a C++ program to reverse a given string. 
Example: 
Sample Input: w3resource
Sample Output: ecruoser3w
*/

//My Solution 

#include <iostream> 
#include <string> 
#include <algorithm> 

int main()
{
    std::cout << "Enter a string: "; 
    std::string x; 
    std::cin >> x; 
    
    std::reverse(x.begin(), x.end());
    std::cout << x; 
}

//My Second solution 

#include <string> 
int main()
{
    std::string x;
    std::cin >> x; 
    std::string newS = ""; 
    
    for(int i = x.length()-1; i >= 0; --i)
    {
         newS += x[i]; 
    }//Follow the same logic as a countdown loop by starting from the greatest number
   
    
    
    
    std::cout << newS;
}
