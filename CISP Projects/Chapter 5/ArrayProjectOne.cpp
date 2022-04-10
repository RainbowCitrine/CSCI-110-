#include <iostream> 
#include <string> 
using namespace std; 

int main()
{

    int numberOfStudents; //Will be used to calculate how many indexes you might need 
    int scores[100]; //Store indexes since a user can input a lot of grades 
    int best = 0; 
    string grade; 

    cout << "Enter the number of students: "; 
    cin >> numberOfStudents; 
    cout << "Enter 4 scores: "; 
    

    for(int i = 0; i < numberOfStudents; ++i) //Use a for loop to stop at the number of inputs the user needs 
    {
         cin >> scores[i]; //Store cin in a for loop so the user can keep inputting values 
        
        if(scores[i] > best)
        {
            best = scores[i]; //Loop to find the best score 
        }
    }

    for (int i = 0; i < numberOfStudents; ++i) //Calculate the grades with the best score 
    {
        if(scores[i] >= best -10)
        {
            grade = "A"; 
        }
        else if(scores[i] >= best - 20)
        {
            grade = "B"; 
        }
        else if(scores[i] >= best - 30)
        {
            grade = "C"; 
        }
        else if(scores[i] >= best - 40)
        {
            grade = "D"; 
        }
        else
        {
            grade = "F"; 
        }

        cout << "Student " << i << " score is " << scores[i] << " and the grade is " << grade << endl; //Cout statement

    }

}
