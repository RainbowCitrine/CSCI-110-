#include <iostream> 

int main()
{
    
    int size; 
    int* ptr; 
    std::cout << "Enter number of values you want to store (Size of array):" << std::endl;
    std::cin >> size; 
    ptr = new int[size]; //creates array of size 
    
    
    std::cout << "Enter the values you want to store (Size of array):" << std::endl;

    for(int i = 0; i <size; ++i)
    {
        std::cin >> ptr[i]; 
    }
    
    std::cout << "Values in the array are: " << std::endl; 
     
    for(int i = 0; i <size; ++i)
    {
        std::cout << ptr[i]; 
    }
}
