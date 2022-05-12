#include <iostream> 
#include <cmath>
#include <math.h>  
class MyPoint
{
private: 
    double x; 
    double y; 
public: 
    MyPoint(); 
    MyPoint(double, double); 
    void setX(double); 
    void setY(double); 
    double getX(); 
    double getY(); 
    double getDistance(MyPoint p2); 
};
void MyPoint::setX(double setX)
{
    x = setX; 
}
void MyPoint::setY(double setY)
{
    y = setY; 
}
double MyPoint::getX()
{
    return x; 
}
double MyPoint::getY()
{
    return y; 
}
MyPoint::MyPoint()
{
   this->x = 0; 
   this->y = 0; 
}
MyPoint::MyPoint(double newx, double newy)
{
    this->x = newx; 
    this->y = newy; 
}
double MyPoint::getDistance(MyPoint p2)
{
    
    return sqrt(pow(x - p2.x, 2) + pow(y - p2.y, 2));

}
class MyThreeDPoint:public MyPoint
{
private: 
    double z; 
public: 

    void setZ(double newzz)
    {
        z = newzz; 
    }
    double getZ()
    {
        return z; 
    }
    MyThreeDPoint(): MyPoint(0, 0)
    {
        z = 0; 
    }
    MyThreeDPoint(double x, double y, double z): MyPoint(x, y)
    {
        this->z = z;
    }
   double distance(MyThreeDPoint p2)
   {
       return sqrt(pow(getX() - p2.getX(), 2) + pow(getY() - p2.getY(), 2) + pow(getZ() - p2.getZ(),2));
       
   }
}; 
int main()
{
    MyThreeDPoint p1;
    MyThreeDPoint p2(10, 30, 25.5);
    std::cout << "Distance is "<< p1.distance(p2);
}
