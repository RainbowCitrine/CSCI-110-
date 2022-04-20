/* (The Location class) Design a class named Location for locating a maximal value and its location in a two-dimensional array. 
The class contains public data fields row, column, and maxValue that store the maximal value and its indices in a two dimensional array with row 
and column as int type and maxValue as double type.
Write the following function that returns the location of the largest element in a two-dimensional array. Assume that the column size is fixed.

For example: 

Enter a 3 by 4 two-dimensional array:
23.5 35 2 10
4.5 3 45 3.5
35 44 5.5 9.6 
The location of the largest element is 45 at (1, 2)

*/

//My Solution 

#include <iostream> 

class Location
{
    public: 
    Location(int r, int c, double max)
    {
        row = r; 
        column = c; 
        maxValue = max; 
    }

    int row; 
    int column; 
    double maxValue; 

};
const int ROW_SIZE = 3; 
const int COLUMN_SIZE = 4; 

Location largest(const double a[][COLUMN_SIZE])
{
    int row = 0; 
    int column = 0; 
    double maxValue = a[0][0]; 

    for(row = 0; row < ROW_SIZE; ++row)
    {
        for(column = 0; column < COLUMN_SIZE; ++column)
        {
            if(maxValue < a[row][column])
            {
                row = row; 
                column = column; 
                maxValue = a[row][column]; 
            }
            
        }
    }
    return Location(row, column, maxValue);
}
int main()
{
    double p[ROW_SIZE][COLUMN_SIZE]; 
    std::cout << "Enter 3 by 4 two dimensional array: "; 
    for(int i = 0; i < ROW_SIZE; ++i)
    {
        for(int j = 0; j < COLUMN_SIZE; ++j)
        std::cin >> p[i][j]; 
    }
    Location loc = largest(p); 
    std::cout << "The location of the largest element is " << loc.maxValue << " at(" << loc.row << ", " << loc.column << ")" <<  std::endl; 
}
