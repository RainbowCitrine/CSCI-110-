#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ifstream input;
  // Open a file
  input.open("Exercise13_3.txt");
  if (input.fail())
  {
    cout << "File does not exist" << endl;
    cout << "Exit program" << endl;
    return 0;
  }
  int number = 0;
  int total = 0;
  while (!input.eof()) // Continue if not end of file
  {
    input >> number;
    total += number;
   }
  input.close();
  cout << "total is " << total << endl;
  return 0;
}
