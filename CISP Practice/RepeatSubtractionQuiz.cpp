#include <iostream>
#include <ctime> 
#include <cstdlib>

using namespace std; 

int main()
{

    srand(time(0)); //Helps generate random numbers through seeding 
    int number1, number2; 


    number1 = rand() % 10; //rand is a number generator 
    number2 = rand() % 10; //Use % to reduce the size of the number 


    if (number1 < number2)
    {
        int temp = number1; 
        number1 = number2; 
        number2 = temp; 
    }

    cout << "What is " << number1 << " - " << number2 << "? ";

    int answer;
    cin >> answer; 
    
    while (number1 - number2 != answer)
{

    cout << "Sorry, that is not correct try again. What is " 
        << number1 << " - " << number2 <<"? ";
        cin >> answer; 

}

cout << "Congratulations you got the correct answer!" << endl; 

    return 0; 
}
