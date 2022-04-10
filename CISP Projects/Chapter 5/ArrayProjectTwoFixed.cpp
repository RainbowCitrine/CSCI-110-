#include <iostream>
using namespace std;
int main()
{
  int counts[100] = {0};
  cout << "Enter the numbers between 1 and 100 ending with 0: ";
  // Read all numbers
  int number; // number read from a file
  cin >> number;
  while (number != 0)
  {
    counts[number - 1]++;
    cin >> number;
  }
  // Display result
  for (int i = 0; i < 100; i++)
  {
    int value = i + 1;
    int currentElement = counts[i];

    if(counts[i] > 1)
    {
        cout << value << " occurs " << currentElement << " times " << endl; 
    }
    else if(counts[i] == 1)
    {
        cout << value << " occures " << currentElement << " time " << endl; 
    }
  }

  return 0;
}

//ex. 1-100      A-Z    10-20


//1 2 3 4 5 .... 100    values


// ex.   3 2 4 2 2 100 0      sample run (values given)


//grab the current value                        nameOfArray[counter]   ex. 3

//convert the value to the correct index                             ex. value - 1 = index  (3 - 1) = 2

//counter is the index

//cin >> currentValue

// currentValue      3
//  currentValue - 1 = correct index   2
// myArray[currentValue - 1]++  = the 0 and index 2

//0 3 1 1 0      1
//0 1 2 3 4 .... 99     index                              array principles: array starts at index 0, last index is always size - 1


//iterate through the array one more time (with a for loop)
//if the element/currentValue (myArray[couner])    > 1 , write as plural form
//else if currentValue is 1, write as the singular form
//else do nothing



//A B C D .... Z   values
//0 1 2 3 .... 25  index                                array of size 26, starts at index 0 and ends at index 25 (size - 1)


//10 11 12 13 14 ... 20      11 total values
//0  1  2  3  4  ... 10                        array of size 11 (starts at index 0 and ends at index 10)

//if the value is 10, then the index is 0
//if the value is 11, then the index is 1

//OFFSET = 10

// OFFSET_OF_VALUE_TO_INDEX = -10;
// OFFSET_OF_INDEX_TO_VALUE = 10;