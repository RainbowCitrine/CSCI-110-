#include <iostream> 

int main()
{
    std::string grade; 
    double gpa; 

    

    for(int i = 0; i < 9; ++i)
    {

    std::cout << "Please enter the grade of the student: "; 
    std::cin >> grade; 

    if(grade == "A+" || grade == "A")
    {
        gpa = 4; 
        std::cout<<"Your numeric grade is " << gpa << "\n";
    }
    else if(grade == "A-")
    {
        gpa = 3.7; 
        std::cout<<"Your numeric grade is " << gpa << "\n";
    }
    else if(grade == "B+")
    {
        gpa = 3.3; 
        std::cout<<"Your numeric grade is " << gpa << "\n";
    }
    else if(grade == "B")
    {
        gpa = 3.0;
        std::cout<<"Your numeric grade is " << gpa << "\n"; 
    }
    else if(grade == "B-")
    {
        gpa = 2.7; 
        std::cout<<"Your numeric grade is " << gpa << "\n"; 
    }
    else if(grade == "C+")
    {
        gpa = 2.3; 
        std::cout<<"Your numeric grade is " << gpa << "\n";
    }
    else if(grade == "C")
    {
        gpa = 2.0; 
        std::cout<<"Your numeric grade is " << gpa << "\n";
    } 
    else if(grade == "C-")
    {
        gpa = 1.7;
        std::cout<<"Your numeric grade is " << gpa << "\n";
    }
    else if(grade == "D+")
    {
        gpa = 1.3;
        std::cout<<"Your numeric grade is " << gpa << "\n";
    }
    else if(grade == "D")
    {
        gpa = 1.0;
        std::cout<<"Your numeric grade is " << gpa << "\n";
    }
    else if(grade == "D-")
    {
        gpa = 0.7;
        std::cout<<"Your numeric grade is " << gpa << "\n";
    }
    else if(grade == "F" || grade == "F+" || grade == "F-")
    {
        gpa = 0; 
        std::cout << "Your numeric grade is " << gpa << "\n";
    }

    }
}   

