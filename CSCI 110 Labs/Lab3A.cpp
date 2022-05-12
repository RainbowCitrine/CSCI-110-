#include <iostream> 
#include <cmath>
#include <iomanip>

std::string choice; 
class Shape
{
public: 

    double r; 
    double h;

    Shape(double newR, double newH)
    {
        r = newR; 
        h = newH; 
    }
    Shape(double r2)
    {
        this->r = r2; 
    }
    void setR(double newR)
    {
        this->r = newR; 
    }
    void setH(double newH)
    {
        this->h = newH; 
    }
    double getR()
    {
        return r; 
    }
    double getH()
    {
        return h; 
    }
    double getVolumeSphere()
    {
        double a = (4.0/3.0) * 3.14159 * pow(r, 3); 
        float b = std::floor(a * 100.0) / 100.0; 
        return b; 
    }
    double getSurfaceSphere()
    {
        double c = 4 * 3.14159 * pow(r, 2); 
        float d = std::floor(c * 100.0) / 100.0; 
        return d; 
    }
    double getVolumeCylnder()
    {
        double e = 3.14159 * pow(r, 2) * h; 
        float f = std::floor(e * 100.0) /100.0; 
        return f; 
    }
    double getSurfaceCylnder()
    {
        double k = 2.0 * 3.14159 * r * h + 2.0 * 3.14159 * pow(r, 2); 
        double l = std::floor(k * 100.0) / 100.0; 
        return l; 
    }
    double getVolumeCone()
    {
        double g = 3.14159 * pow(r, 2) * (h/3); 
        float h = std::floor(g * 100.0)/100.0;
        return h; 
    }
    double getSurfaceCone()
    {
        double i = 3.14159 * r * (r + sqrt(pow(h, 2) + pow(r, 2))); 
        float j = std::floor(i * 100.0) /100.0; 
        return j; 
    }
};

int main()
{
    do 
    {

    
    double x, y; 
    
    std::cout << "Please enter the Radius: "; 
    std::cin >>x; 
    std::cout << "Please enter the Height: "; 
    std::cin >> y;
    
     if(x < 0 || y < 0)
    {
        std::cout << "Error: You cannot set your radius or height to a negative number." << std::endl; 
        std::cout << "Do you want to continue (y/n)? "; 
        std::cin >> choice; 
        if(choice == "y" || choice == "Y")
        {
            std::cout << "Please enter the Radius: "; 
            std::cin >> x; 
            std::cout << "Please enter the Height: "; 
            std::cin >> y; 
        }
        else
        {
            std::cout << "Exit" << std::endl; 
            exit(0);  
        }
       
    }
   
   if(x > 0 || y > 0)
   {

   
    Shape shape1(x, y); 
    Shape shape2(x);

    
    std::cout << std::setw(30) << "Volume" << std::setw(40) << "Surface" << std::endl; 
    std::cout << "Sphere" << std::setw (24) << shape2.getVolumeSphere(); 
    std::cout << std::setw(39) << shape2.getSurfaceSphere() << std::endl;
    std::cout << "Cylinder" << std::setw(22) <<shape1.getVolumeCylnder();
    std::cout << std::setw(39) << shape1.getSurfaceCylnder() << std::endl;
    std::cout << "Cone" << std::setw(26) << shape1.getVolumeCone();
    std::cout << std::setw(39) << shape1.getSurfaceCone() << std::endl;
    
    std::cout << "Do you want to continue (y/n)? "; 
    std::cin >> choice; 

    if(choice != "y" || choice != "Y")
    {
        std::cout << "Exit!" << std::endl;
        exit(0); 
    }
   }


    }while(choice == "y" || choice == "Y"); 

}
