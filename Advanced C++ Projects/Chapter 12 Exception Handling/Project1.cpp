#include <iostream> 
#include <string> 
#include <exception> 
int hex2dec(std::string hex)
{
    std::string x = hex; 
    int base = 1; 
    int temp = 0; 
    for(int i = hex.size() - 1; i >= 0; --i)
    {
        if(hex[i] >= '0' && hex[i] <= '9')
        {
            temp += (hex[i] - 48) * base;
            base *= 16; 
        }
        else if(hex[i] >= 'A' && hex[i] <='F')
        {
            temp += (hex[i] - 55)*base;
            base *= 16; 
        }
        else
        {
            throw std::invalid_argument("Not a hex number"); 
        }
    }
    return temp; 
}

int main()
{
    try
    {
    std::string x; 
    std::cin >> x; 
    std::cout << hex2dec(x); 
    }
    catch(std::invalid_argument& e)
    {
        std::cout << e.what() << std::endl; 
    }
}
