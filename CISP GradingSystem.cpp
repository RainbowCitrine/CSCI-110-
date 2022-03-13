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
        
        
        
        if(currentScore > largest) //if currentScore beats out our largest we need to update it with the second score
        {
            secondLargest = largest; //demoted the largest with the current score
            secondLargestName = largestName; //updated our largest name with the second name if it beats out our problem 
            
            largest = currentScore; //updated the largest score from the second score 
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
