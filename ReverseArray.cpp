#include <iostream> 

using namespace std; 

int main()
{

    int myarray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; //Equal to nine
    int length = 9; // size of the array 
    int temp = 0; 
                        //4
    for(int i = 0; i < (length / 2); i++)
    {
        temp = myarray[i]; 
        myarray[i] = myarray[length - i -1]; //corrosponding value
        myarray[length - i - 1] = temp; 
    }
    for (int i = 0; i < length; i++)
    {
        cout << myarray[i] << endl; 
    }
}
