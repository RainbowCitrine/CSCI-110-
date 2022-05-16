//Basic template swap 
#include <iostream> 

template<typename Type>
void swap(Type& a, Type& b)
{
    Type temp = a; 
    a = b; 
    b = temp; 
}


int main()
{
    int a = 5, b = 7;
    std::cout << a << " - " << b << std::endl; 
    swap<int>(a, b); 
    std::cout << a << " - " << b << std::endl;
    char c = 'c', d = 'd'; 
    std::cout << c << " - " << d << std::endl; 
    swap<char>(c, d);
    std::cout << c << " - " << d << std::endl; 
}
