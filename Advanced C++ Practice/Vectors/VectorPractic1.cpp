//Basic vector practice 

#include <iostream> 
#include <vector> 
#include <string> 

int main()
{
    std::vector<int> intVector; 

    for(int i = 0; i < 10; ++i)
    {
        intVector.push_back(i+1); 
    }
    std::cout << "Numbers in the vector: "; 
    for(int i = 0; i < intVector.size(); ++i)
    {
        std::cout << intVector[i] << " "; 
    }
    std::cout << std::endl; 

    std::vector<std::string> stringVector;

    stringVector.push_back("Dallas");
    stringVector.push_back("Houston"); 
    stringVector.push_back("Sydney"); 
    stringVector.push_back("Sacramento");
    for(int i = 0; i < stringVector.size(); ++i)
    {
        std::cout << stringVector[i] << " "; 
    }
    std::cout << std::endl; 
    stringVector.pop_back(); 
    for(int i = 0; i < stringVector.size(); ++i)
    {
        std::cout << stringVector[i] << " "; 
    }

    std::vector<std::string> v2; 
    v2.swap(stringVector); 
    v2[0] = "Atlanta"; 

    for(int i = 0; i < v2.size(); ++i)
    {
        std::cout << v2.at(i) << " "; 
    }
    std::cout << std::endl; 
}
