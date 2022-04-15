/*
Write a test program that reads a string, invokes the count function, and displays the counts.

Programing is fun
a: 1 time
f: 1 time
g: 2 times
i: 2 times
m: 1 time
n: 2 times
o: 1 time
p: 1 time
r: 2 times
s: 1 time
u: 1 time


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
