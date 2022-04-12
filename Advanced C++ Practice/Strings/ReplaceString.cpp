/*
Write a C++ program to change every letter in a given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a). 
Example: 
Sample Input: w3resource
Sample Output: x3sftpvsdf
*/

//My Solution 

#include <iostream> 
#include <string> 

int main()
{
    std::string x; 
    std::cin >> x; 
    
    for(int i = 0; i < x.length(); ++i)
    {
         x.replace(0, i, "x3sffpvsdf"); 
    }
    std::cout << x.erase(10); 
}
