/*
Write a test program that reads a string, invokes the count function, and displays the counts.

For example: 
Programming is cool 

P: 1 time 
r: 2 times
o: 1 time

and so on...


*/

#include <iostream> 
#include <string> 
#include <algorithm> 

int main()
{
    std::string x; 
    std::cout << "Enter string: "; 
    getline(std::cin, x); 

    int counter = 0; 
    for(int i = 0; i < x.length(); ++i)
    {
        counter = 0; 
        for(int j = 0; j < x.length(); ++j)
        {
            if(x[i] == x[j] && isalpha(x[i]))
            {
                counter++; 
            }
            x.erase(remove(x.begin(), x.end(), ' '), x.end()); 
        }
        if(counter == 1)
        std::cout << x[i]  << ": " << counter  << " time" << std::endl; 
        else
        std::cout << x[i]  << ": " << counter  << " times" << std::endl;
    }
     
}
