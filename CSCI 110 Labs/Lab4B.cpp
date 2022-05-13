#include <iostream> 
#include <unordered_map>

void removeDuplicate(int arr[], int n)
{
    std::unordered_map<int, bool> map; 

    for(int i = 0; i < n; ++i)
    {
        if(map.find(arr[i]) == map.end())
        {
            std::cout << arr[i] << " "; 
        }
        map[arr[i]] = true; //Inserting the element
    }
}
int main()
{
    
    std::cout << "Please enter the size of the array: "; 
    int SIZE; 
    std::cin >> SIZE; 
    std::cout << "Enter the numbers you would like in the array: "; 
    int arr[SIZE]; 
    for(int i = 0; i < SIZE; ++i)
    {
        std::cin >> arr[i]; 
    }
    std::cout << "The old array was ";
    for(int i = 0; i < SIZE; ++i)
    {
        std::cout << arr[i] << " "; 
    }
    std::cout <<"\nThe new array is ";
    removeDuplicate(arr, SIZE);  
}
