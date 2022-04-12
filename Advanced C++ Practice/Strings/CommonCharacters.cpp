/*
Write a test program that prompts the user to enter two strings and display their common characters. Here are some sample runs:

Enter a string s1: abcd
Enter a string s2: aecaten
The common characters are ac
*/

//My solution 

#include <iostream> 
#include <string> 

std::string commonChars(std::string& s1,  std::string& s2)
{
    std::string s3 = "";
    for(int i = 0; i < s1.length(); ++i)
    {
        size_t search = s2.find(s1[i]); //Represents the character 
        if(search != std::string::npos) //No position found
        {
            s3 += s2[search]; 
        }
    }
    return s3; 
}

int main()
{
    std::string x; 
    std::string y; 
    std::cin >> x; 
    std::cin >> y; 

    std::cout << commonChars(x, y); 

}
