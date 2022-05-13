#include <iostream> 
#include <algorithm>
#include <iterator>
 
bool equal(int a[], int b, int c[], int d)
{
    bool flag = false; 
    if(b == d)
    {
        for(int i = 0; i < b; ++i)
        {
            if(a[i] == c[i])
            {
                flag = true; 
            }
            else
            {
                flag = false; 
                break; 
            }
        }
    }
    return flag; 
}
 
int main()
{
    int size; 
    int size1; 
 
    std::cout << "Please enter the size for array one: ";
    std::cin >> size; 
    std::cout << "Please enter the size for array two: "; 
    std::cin >> size1; 
    int arr[size]; 
    int arr2[size1];
    std::cout << "Please enter the numbers you want inside of array one: "; 
    for(int i = 0; i < size; ++i)
    {
        std::cin >> arr[i]; 
    } 
    std::cout << "Please enter the numbers you want inside of array two: "; 
    for(int i = 0; i < size1; ++i)
    {
        std::cin >> arr2[i]; 
    }
 
    if(equal(arr, size, arr2, size1))
    {
        std::cout << "The size of array one is " << size << std::endl; 
        std::cout << "The size of array two is " << size1 << std::endl; 
        std::cout << "Both arrays are the same " << std::endl;   
    }
    else
    {
        std::cout << "The size of array one is " << size << std::endl; 
        std::cout << "The size of array two is " << size1 << std::endl; 
        std::cout << "Both arrays are not the same" << std::endl; 
    }
}
