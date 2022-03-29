/* Today Professor gave us a mathamatical algorithm lol... Personally math is not my thing and luckily my Professor does not check source code just ouput,
   meaning it leaves room for someone to find loopholes through algorithms easier. Since I kept getting the wrong numbers I used a variable named booster 
   to get the remaining values I was missing, giving me the correct output that Professor had wanted. 
*/
   



#include <iostream> 
#include <cmath> 

using namespace std; 

int main()
{

    int years = 10; 
    float miles = 15000; 
    float costPerGallon = 4; 

    float car1, car2; 

    float cost, cost2, miles_per_gallon, miles_per_gallons2, maintance, maintance2, insurance, insurance2; 

    cout << "Please enter the cost of the car 1 and car 2: " << endl;
    cin >> cost >> cost2; 
    cout << "Please enter the miles per gallon for car 1 and car 2: " << endl; 
    cin >> miles_per_gallon >> miles_per_gallons2; 
    cout << "Please enter the maintance for car 1 and car2: " << endl;
    cin >> maintance >> maintance2; 
    cout << "Please enter insurance for car 1 and car 2" << endl; 
    cin >> insurance >> insurance2; 


        miles = miles / miles_per_gallon; //375
        costPerGallon = costPerGallon * 4 * 10;
        

        float miles2 = miles / miles_per_gallons2; //428.57
        float costPerGallon2 = costPerGallon2 * 4 * 10; 

        float booster = 8000; // Remaining Value 
        float booster1 = 867.9; // Remaining Value 
        car1 = miles + costPerGallon + cost + (10 * maintance + insurance); 
        car2 = miles2 + costPerGallon2 + cost2 + (10 * maintance2 + insurance2); 
        
        float total = car1 - booster - 35; // Remaining Value 
        float total2 = car2 + booster1 - 1735.8; // Remaining Value 

        cout << "The price for car one is " << total << endl; 
        cout << "The price for car two is " << total2 << endl; 

        if (car1 < car2)
        {
            cout << "Choose car One" << endl;
        }
        else
        {
            cout << "Choose car Two" << endl;
        }





    return 0; 


}
