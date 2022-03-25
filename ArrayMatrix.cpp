#include <iostream> 

using namespace std; 

int main()
{
    int Row_Size = 10;
    int Col_Size = 10; 

    int matrix[Row_Size][Col_Size]; 

    for (int row = 0; row < Row_Size; ++row)
    {
        for (int column = 0; column < Col_Size; ++column)
        {
           matrix[row][column] = rand() % 100;
        }
    }
    for (int row = 0; row < Row_Size; ++row)
    {
        for (int column = 0; column < Col_Size; ++column)
        {
            cout << matrix[row][column] << " ";
        }
        cout << endl;
    }

    int total = 0; 
    for (int row = 0; row < Row_Size; ++row)
    {
        for(int column = 0; column < Col_Size; ++column)
        {
            total += matrix[row][column];
        }
    }
    cout << "Total: " << total << endl;

}
