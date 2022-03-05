#include <iostream> 
#include <cmath> 



using namespace std; 

int main()

{

    int ftime; 
    int stime; 

    cout << "Please enter the first time: ";
    cin >> ftime; 

    cout << "Please enter the second time: ";
    cin >> stime; 

if (ftime < stime)
{

    int totalTime = stime - ftime;

    int hours = totalTime / 100; 
    int minutes = totalTime % 100; 
    cout << hours << " hours " << minutes << " and minutes"; 



}
else if (ftime > stime)
{
   
 

   float subTime = stime - ftime; 
   float remTime = subTime / 100; 

   float addTime = remTime + 24; 
   int hours = static_cast<int>(addTime);
 
   float minutes = addTime - addTime + 0.5 * 60;  

   cout << hours << " hours "<< minutes << " minutes " << endl; 


}

return 0; 

}
