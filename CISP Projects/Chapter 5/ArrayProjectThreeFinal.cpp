#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std; 

const int N = 3; 
const int ROW = 3; 
const int SPACING = 20; 
const int HALF_SPACING = SPACING / 2; 
const int ELEMENT_SPACING = 4; 

// [0][0] [0][1] [0][2]             
// [1][0] [2][1] [1][2]
// [2][0] [2][1] [2][2]

//fill up this array with input from user,      what order? 

//like a book, left to right, top to bottom 

//use nested for loops for 2D arrays 

void addMatrix(const double a[][N], const double b[][N], double c[][N]) //pass in rows as well
{


    for(int currentRow = 0; currentRow < ROW; ++currentRow)
    {    
    


        for(int currentColumn = 0; currentColumn < N; ++currentColumn)
        {

            c[currentRow][currentColumn]  = a[currentRow][currentColumn] + b[currentRow][currentColumn];

        } //finished 0,0

         //c[currentRow[currentColumn]  = a[currentRow][currentColumn] = b[currentRow[currentColumn];


    }

}

int main()
{


cout << "Enter matrix1: "; 
    double a[ROW][N];

    for(int currentRow = 0; currentRow < ROW; ++currentRow)
    {
        for(int currentColumn = 0; currentColumn < N; ++currentColumn)
        {
            cin >> a[currentRow][currentColumn]; 
        }
    }



    cout << "Enter matrix1: "; 
    double b[ROW][N];

    for(int currentRow = 0; currentRow < ROW; ++currentRow)
    {
        for(int currentColumn = 0; currentColumn < N; ++currentColumn)
        {
            cin >> b[currentRow][currentColumn]; 
        }
    }

    //julio    spacing is 10 
    //left     Julio 
    //right            Julio 

    double c[ROW][N]; //filled with garbage 
    addMatrix(a, b, c); //add values from a and b and use it to initialize 
    cout << endl; 
    cout << left; 

    for(int currentRow = 0; currentRow < ROW; ++currentRow) //print the rows
    {

        
        //do a first 
        for(int currentColumn = 0; currentColumn < N; ++currentColumn)
        {
            cout << setw(ELEMENT_SPACING)<< a[currentRow][currentColumn];
        }


        //do b next     
         for(int currentColumn = 0; currentColumn < N; ++currentColumn)
        {
           cout << setw(ELEMENT_SPACING)<< b[currentRow][currentColumn];
        }

        cout << setw(SPACING) << " "; 

         for(int currentColumn = 0; currentColumn < N; ++currentColumn)
        {
            cout << setw(ELEMENT_SPACING)<< c[currentRow][currentColumn];
        }

        cout << endl; 

    }

    return 0; 
}