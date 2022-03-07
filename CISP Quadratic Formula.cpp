#include <iostream> 
#include <cmath> 
#include <math.h> 
using namespace std; 

int main(){
    double a, b, c; 
    
    cout << "Please enter a b c " << endl; 
    
    cin >> a >> b >> c; 
    
    double discriminate = b * b - 4 * a * c; 
    
    if (discriminate < 0){
        cout << "The equation has no real roots" << endl; 
    
    }
    else if (discriminate == 0){
        double rootOne = (-b + sqrt(b * b - 4 * a * c)) / (2*a);
        cout << "The root is " << rootOne << endl; 
    }
    else{
        double rootOne = (-b + sqrt(b * b - 4 * a * c)) / (2*a);
        double rootTwo = (-b - sqrt(b * b - 4 * a * c)) / (2*a);
        cout << "The roots are " << rootOne << " and " << rootTwo << endl; 
    }
    
    
    
}
