#include <iostream> 
#include <string> 


bool isAnagram(std::string s1, std::string s2)
{
    //checking to see if they are the same legnth
    if(s1.length() != s2.length() )
    {
        return false; 
    }

    char dictionary[26] = {}; //initialized a for loop 

    //Single Pass 
    for(int i = 0; i < s1.length(); ++i)
    {
        dictionary[s1[i]-'a']++; 
        dictionary[s2[i]-'a']--; 
    }

    for(int i = 0; i < s1.length(); ++i)
    {
        if(dictionary[i] != 0)
        {
            return false; 
        }
    }
    return true; 
}



int main()
{
    std::string word1; 
    std::string word2; 
    std::cout << "Enter a string s1: ";
    std::cin >> word1; 
    std::cout << "Enter a string s2: ";
    std::cin >> word2; 

    

    if(isAnagram(word1, word2))
    {
        std::cout << word1 << " and " << word2 << " are anagrams" << std::endl; 
    }
    else
    {
        std::cout << word1 << " and " << word2 << " are not anagrams" << std::endl; 
    }

    

}
