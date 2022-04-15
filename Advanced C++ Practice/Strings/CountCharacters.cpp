/* Write a test program that displays the number of letters in a string 
  
  For example: Programming 101 
  
  The number of letters in programming 101 is 11

*/

// My solution 

#include <iostream> 
#include <string> 

int countLetters(std::string& s)
{
    int length = s.length(); 
    int counter = 0; 

    for(int i = 0; i < length; ++i)
    {
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            counter++; 
        }
    }
    return counter; 
}

int main()
{
    std::cout << "Enter in a string: "; 
    std::string y; 
    getline(std::cin, y); 

   std::cout << "The number of letters in " << y << " is " << countLetters(y);
}
