#include <iostream>
using namespace std;
int main()
{
    int numberOfStudents;
    cout << "Enter a number of students: ";
    cin >> numberOfStudents;
    
    int currentScore;
    string currentName;
    
    string largestName;
    string secondLargestName;
    int largest = -100;
    int secondLargest = -200;
    
    for(int i = 0; i < numberOfStudents; i++)
    {
        cout << "Enter a student name: ";
        cin >> currentName;
        cout << "Enter a student score: ";
        cin >> currentScore;
        
        
        
        if(currentScore > largest) //if currentScore beats our largest
        {
            secondLargest = largest; //demoted the largest
            secondLargestName = largestName;
            
            largest = currentScore; //updated the largest
            largestName = currentName;
        }
        else if(currentScore > secondLargest) //if currentScore beats the second largest
        {
            secondLargest = currentScore; //updated our secondLargest
            secondLargestName = currentName;
        }
        
        
        
    }
    
   
    cout << "Top Two Students:" << endl;
    cout << largestName << "'s " << "score is " << largest << endl;
    cout << secondLargestName << "'s " << "score is " << secondLargest << endl;
    return 0;
}
