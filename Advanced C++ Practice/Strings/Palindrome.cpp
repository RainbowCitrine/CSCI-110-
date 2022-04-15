// Write a program that checks if a word is a palindrome number or not for example: lol is a palindrome numer



// My solution

#include <iostream> 
#include <string> 
#include <algorithm> 

void isPalindrome(std::string& x)
{
    std::string reverse; 
    reverse = x; 
    
    std::reverse(reverse.begin(), reverse.end());
    
    if(reverse == x)
    {
        std::cout << x << " is a palindrome" << std::endl; 
    }
    else
    {
        std::cout << x << " is not a palindrome" << std::endl; 
    }
}

int main()
{
    std::cout << "Please enter a string: "; 
    std::string test; 
    std::cin >> test; 
    
    isPalindrome(test); 
}
