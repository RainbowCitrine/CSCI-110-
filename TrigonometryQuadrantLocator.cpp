#include <iostream> 
#include <iomanip> 
#include <cmath> 
#include <string> 

using namespace std; 

int main()
{

    int degrees; 
    int referenceAngle = 360; 
    char n;
    int i = 0; 
    
    

    cout << "Welcome to the trignometry quadrant locator!" << endl; 
    cout << "Would you like to proceed y/n?" << endl; 
    cin >> n; 

    
    while (n == 'y' || n == 'Y')
    {
        
        cout << " Please type either \n 1. for Sine, \n 2. for Cosine, \n 3. for Tangent, \n 4. for Cosecant, \n 5. for Secant, \n 6. for Cotangent" << endl; 
        int function; 
        cin >> function; 
    
    
    switch (function)
    {
        case 1: 
        cout << "Please enter the degree of Sine: ";
        cin >> degrees; 

        if (degrees >= 0 && degrees <= 90)
        {
            cout << "The Degrees is " << degrees << " and Sine is located in Quadrant I and is positive." << endl; 
        } 
        else if (degrees > 90 && degrees <= 180)
        {
            cout << "The Degrees is " << degrees << " and Sine is located in Quadrant II and is positive." << endl; 
        }
        else if (degrees > 180 && degrees <= 270)
        {
            cout << "The Degrees is " << degrees <<" and Sine is located in Quadrant III and is negative." << endl;  
        }
        else if (degrees > 270 && degrees <= 360)
        {
            cout << "The Degrees is " << degrees << " and Sine is loacted in Quadrant IV and is negative." << endl; 
        }
        else if (degrees < 0 && degrees >= -89)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Sine is located in Quadrant IV and is negative" << endl; 
        }
        else if (degrees <= -90 && degrees >= -179)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Sine is located in Quadrant III and is negative" << endl; 
        }
        else if (degrees < -179 && degrees >= -269)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Sine is loacted in Quadrant II and is positive" << endl; 
        }
        else if (degrees < -269 && degrees >= -360)
        {
            degrees += referenceAngle; 
            cout << "Degrees is " << degrees << " and Sine is located Quadrant I is positive" << endl; 
        }
        break; 

        case 2: 
        cout << "Please enter the degree of Cosine: ";
        cin >> degrees; 

        if (degrees >= 0 && degrees <= 90)
        {
            cout << "The Degrees is " << degrees << " and Cosine is located in Quadrant I and is positive." << endl; 
        } 
        else if (degrees > 90 && degrees <= 180)
        {
            cout << "The Degrees is " << degrees << " and Cosine is located in Quadrant II and is positive." << endl; 
        }
        else if (degrees > 180 && degrees <= 270)
        {
            cout << "The Degrees is " << degrees << " and Cosine is located in Quadrant III and is negative." << endl;  
        }
        else if (degrees > 270 && degrees <= 360)
        {
            cout << "The Degrees is " << degrees << " and Cosine is loacted in Quadrant IV and is positive." << endl; 
        }
           else if (degrees < 0 && degrees >= -89)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Cosine is located in Quadrant IV and is positive." << endl; 
        }
        else if (degrees <= -90 && degrees >= -179)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Cosine is located in Quadrant III and is negative." << endl; 
        }
        else if (degrees < -179 && degrees >= -269)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Cosine is loacted in Quadrant II and is negative." << endl; 
        }
        else if (degrees < -269 && degrees >= -360)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Cosine is located Quadrant I is positive." << endl; 
        }
        break; 

        case 3: 
        cout << "Please enter the degreee of Tangent: "; 
        cin >> degrees;

        if (degrees >= 0 && degrees <= 90)
        {
            cout << "The Degrees is " << degrees << " and Tangent is located in Quadrant I and is positive." << endl;  
        }
        else if (degrees > 90 && degrees <= 180)
        {
            cout << "The Degrees is " << degrees << " and Tangent is located in Quadrant II and is negative." << endl; 

        }
        else if (degrees > 180 && degrees <= 270)
        {
            cout << "The Degrees is " << degrees <<" and Tangent is located in Quadrant III and is positive." << endl; 
        }
        else if (degrees > 270 && degrees <= 360)
        {
            cout << "The Degrees is " << degrees << " and Tangent is located in Quadrant IV and is negative." << endl; 
        }
         else if (degrees < 0 && degrees >= -89)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Tangent is located in Quadrant IV and is negative." << endl; 
        }
        else if (degrees <= -90 && degrees >= -179)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Tangent is located in Quadrant III and is positive." << endl; 
        }
        else if (degrees < -179 && degrees >= -269)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Tangent is loacted in Quadrant II and is negative." << endl; 
        }
        else if (degrees < -269 && degrees >= -360)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Tangent is located Quadrant I is positive." << endl; 
        }
        break; 

        case 4: 
        cout << "Please enter the degreee of Cosecant: "; 
        cin >> degrees;

        if (degrees >= 0 && degrees <= 90)
        {
            cout << "The Degrees is " << degrees << " and Cosecant is located in Quadrant I and is positive." << endl;  
        }
        else if (degrees > 90 && degrees <= 180)
        {
            cout << "The Degrees is " << degrees << "and Cosecant is located in Quadrant II and is positive." << endl; 

        }
        else if (degrees > 180 && degrees <= 270)
        {
            cout << "The Degrees is " << degrees << " and Cosecant is located in Quadrant III and is negative." << endl; 
        }
        else if (degrees > 270 && degrees <= 360)
        {
            cout << "The Degrees is " << degrees << " and Cosecant is located in Quadrant IV and is negative." << endl; 
        }
         else if (degrees < 0 && degrees >= -89)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Cosecant is located in Quadrant IV and is negative." << endl; 
        }
        else if (degrees <= -90 && degrees >= -179)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Cosecant is located in Quadrant III and is negative." << endl; 
        }
        else if (degrees < -179 && degrees >= -269)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Cosecant is loacted in Quadrant II and is positive." << endl; 
        }
        else if (degrees < -269 && degrees >= -360)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Cosecant is located Quadrant I is positive." << endl; 
        }
        break; 

        case 5: 
        cout << "Please enter the degreee of Secant: "; 
        cin >> degrees;

        if (degrees >= 0 && degrees <= 90)
        {
            cout << "The Degrees is " << degrees <<" and Secant is located in Quadrant I and is positve." << endl;  
        }
        else if (degrees > 90 && degrees <= 180)
        {
            cout << "The Degrees is " << degrees << " and Secant is located in Quadrant II and is negative." << endl; 

        }
        else if (degrees > 180 && degrees <= 270)
        {
            cout << "The Degrees is " << degrees << " and Secant is located in Quadrant III and is negative." << endl; 
        }
        else if (degrees > 270 && degrees <= 360)
        {
            cout << "The Degrees is " << degrees << " and Secant is located in Quadrant IV and is positive." << endl; 
        }
          else if (degrees < 0 && degrees >= -89)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees <<" and Secant is located in Quadrant IV and is positive." << endl; 
        }
        else if (degrees <= -90 && degrees >= -179)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Secant is located in Quadrant III and is negative." << endl; 
        }
        else if (degrees < -179 && degrees >= -269)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Secant is loacted in Quadrant II and is negative." << endl; 
        }
        else if (degrees < -269 && degrees >= -360)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Secant is located Quadrant I is positive." << endl; 
        }
        break; 

        case 6: 
        cout << "Please enter the degreee of Cotangent: "; 
        cin >> degrees;

        if (degrees >= 0 && degrees <= 90)
        {
            cout << "The Degrees is " << degrees << " and Cotangent is located in Quadrant I and is positve." << endl;  
        }
        else if (degrees > 90 && degrees <= 180)
        {
            cout << "The Degrees is " << degrees << " and Cotangent is located in Quadrant II and is negative." << endl; 

        }
        else if (degrees > 180 && degrees <= 270)
        {
            cout << "The Degrees is " << degrees << " and Cotangent is located in Quadrant III and is positive." << endl; 
        }
        else if (degrees > 270 && degrees <= 360)
        {
            cout << "The Degrees is " << degrees << " and Cotangent is located in Quadrant IV and is negative." << endl; 
        }
          else if (degrees < 0 && degrees >= -89)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Cotangent is located in Quadrant IV and is negative." << endl; 
        }
        else if (degrees <= -90 && degrees >= -179)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Cotangent is located in Quadrant III and is positive." << endl; 
        }
        else if (degrees < -179 && degrees >= -269)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Cotangent is loacted in Quadrant II and is negative." << endl; 
        }
        else if (degrees < -269 && degrees >= -360)
        {
            degrees += referenceAngle; 
            cout << "The Degrees is " << degrees << " and Cotangent is located Quadrant I is positive." << endl; 
        }
        break; 

        


    }  
        i++; 
        cout << "Would you like to proceed y/n?" << endl; 
        cin >> n; 

        if (n == 'n' || 'n')
        {
            cout << "Thank you for using the trigonometry function locator!" << endl; 
        }

    }    


    
}
