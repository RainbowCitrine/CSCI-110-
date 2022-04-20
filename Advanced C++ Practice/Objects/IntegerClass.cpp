/* Design a class named MyInteger. The class contains the following:

An int data field named value that stores the int value represented by this object.
A constructor that creates a MyInteger object for the specified int value.
A constant get function that return the int value.
Constant functions isEven(), isOdd(), isPrime() that return true if the value is even, odd, or prime, respectively.
Static functions isEven(int), isOdd(int), isPrime(int) that return true if the specified value is even, odd, or prime, respectively.
Static functions isEven(const MyInteger&), isOdd(const MyInteger&), isPrime(const MyInteger&) that return true if the specified value is even, odd, or prime, respectively.
Constant functions equals(int) and equals(const MyInteger&) that return true if the value in the object is equal to the specified value.
A static function parseInt(const string&) that converts a string to an int value.
Draw the UML diagram for the class. Implement the class. Write a client program that tests all functions in the class.

*/

//My Solution 

#include <iostream> 
#include <string> 
#include <sstream>

class MyInteger
{
    public: 
    int value; 
    MyInteger(int newV)
    {
        value = newV; 
    }
    bool isEven()
    {
       return MyInteger::isEven(value); 
    } 
    bool isOdd()
    {
        
        return MyInteger::isOdd(value);
    }
    bool isPrime()
    {
        for(int i = 2; i <= value/2; ++i)
        {
            if(value % i == 0)
                return false; 

        }
        return true; 
    } 
    static bool isEven(int x)
    {
       return (x % 2 == 0);
    }
    static bool isOdd(int y)
    {
        return (y % 2 != 0);
    }
    static bool isPrime(int z)
    {
        for(int i = 2; i <= z/2; ++i)
        {
            if(z % i == 0)
                return false; 

        }
        return true; 
    }
    static bool isEven(const MyInteger& ref)
    {
        
        return (ref.value % 2 == 0); //Use ref.value to call the value 
    }
    static bool isOdd(const MyInteger& ref)
    {
        return (ref.value % 2 != 0);
    }
    static bool isPrime(const MyInteger& ref) 
    {
        for(int i = 2; i <= ref.value/2; ++i)
        {
            if(ref.value % i == 0)
                return false; 
        }
        return true; 
    }
    static int parseInt(const std::string& ref)
    {
        std::stringstream ss(ref); //Object of string stream passing ref
        int j; 
        ss >> j;
        return j;  
    }
};


int main()
{
   
    int test; 
    std::cout << "Enter a value: "; 
    std::cin >> test; 

    std::string x; 
    std::cout << "Enter a string: "; 
    std::cin >> x; 
   
    MyInteger num(test); //passing from num 
    //std::cout << MyInteger::parseInt(x) << std::endl; 
    

    if(num.isEven())
    {
        std::cout << num.value << " is even" << std::endl; 
    }
    if (num.isOdd())
    {
        std::cout << num.value << " is odd" << std::endl; 
    }
    if(num.isPrime())
    {
        std::cout << num.value  << " is prime" << std::endl; 
    }
    std::cout << MyInteger::parseInt(x) << std::endl; 
}
