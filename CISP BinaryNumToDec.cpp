/* 

(Binary to decimal)

Write a function that returns a decimal number from a binary string. The function header is as follows:

int bin2Dec(const string& binaryString)

For example, binaryString 10001 is 17 (1*2^4+0*2^3+0*2^2+0*2+1=17 ). So, bin2Dec("10001") returns 17. Write a test program that prompts the user to enter a binary number as a string and displays its decimal equivalent value.

If you get a logical or runtime error, please refer https://liangcpp.pearsoncmg.com/faq.html.

*/



#include <iostream> 
#include <cmath> 
#include <string> 
#include <algorithm>
using namespace std; 

int binaryToDec(string n)
{
    unsigned long long decimal_num = 0; //final decimal 
    string binary = n; //initiating our parameter 

    reverse(binary.begin(), binary.end()); //Reverse the binary decimal 

    int size = binary.size(); //Obtain the string size through calling the size function 
    
    for (int i = 0; i < size; i++) //begin our loop to find the valid 1s and invalid 0s in this algorithm do this by counting the size of the string 
    {
        if (binary[i] == '1') //Only accepting the ones to add through the logic 
        {
            decimal_num += pow(2, i); //Set 2 to the power of i and add our exponents
        }
    }

    return decimal_num; 
}

int main()
{
   //final decimal 
    string binary; 
    cin >> binary; 
    cout << "Decimal number is: " << binaryToDec(binary);  
}
