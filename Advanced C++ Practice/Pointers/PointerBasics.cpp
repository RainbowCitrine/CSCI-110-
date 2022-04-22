#include <iostream> 

int main()
{
    int n = 10; 
    int* ptr = &n; //Assigns the memory of n 
    std::cout << *ptr << std::endl; //Prints the data value 
    std::cout << ptr << std::endl; //Prints the address
    *ptr = 20; //Assigns a new value to the pointer 
    std::cout << *ptr << std::endl; //Value is now printing 20 
    std::cout << n << std::endl; //Prints 10 
    
    int v; 
    int *ptr2 = &v; 
    *ptr2 = 7;
    std::cout << "v = " << *ptr2 << std::endl; //Prints 7 
     
}
