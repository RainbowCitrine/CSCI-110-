#include <iostream> 

void printNumber(int* numberPtr)
{
    std::cout << *numberPtr << std::endl; 
}

void printCharacter(char* letters)
{
    std::cout << *letters << std::endl;
}
void print(void* ptr, char type)
{
    switch (type)
    {
        case 'i': std::cout << *((int*)ptr) << std::endl; break;//Casted as an int pointer
        case 'c': std::cout << *((char*)ptr) << std::endl; break;//handle char pointer
    }
}

int main()
{
    int number = 5; 
    char letter = 'a'; 
    printNumber(&number); 
    printCharacter(&letter); 
    print(&number, 'i'); //stores int 
    print(&letter, 'c'); //stores character
}
