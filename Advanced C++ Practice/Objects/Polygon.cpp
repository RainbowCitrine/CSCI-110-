/*

An n-sided regular polygon has n sides of the same length, and all its angles have the same degree (i.e., the polygon is both equilateral and equiangular). Design a class named RegularPolygon that contains the following:

A private int data field named n that defines the number of sides in the polygon.
A private double data field named side that stores the length of the side.
A private double data field named x that defines the x-coordinate of the center of the polygon.
A private double data field named y that defines the y-coordinate of the center of the polygon.
A no-arg constructor that creates a regular polygon with n 3, side 1, x 0, and y 0.
A constructor that creates a regular polygon with the specified number of sides and length of side, and centered at (0, 0).
A constructor that creates a regular polygon with the specified number of sides, length of side, and x- and y-coordinates.
The constant accessor functions and mutator functions for all data fields.
The constant function getPerimeter() that returns the perimeter of the polygon.
The constant function getArea() that returns the area of the polygon. The formula for computing the area of a regular polygon is.
Area=n×s24×tan(πn).

Implement the class. Write a test program that creates three RegularPolygon objects, using the no-arg constructor, using RegularPolygon(6, 4), and using RegularPolygon(10, 4, 5.6, 7.8). 
For each object, display its perimeter and area.

*/

//My Solution

#include <iostream> 
#include <cmath> 

//Use this-> when using two same constructors for reference


class Geometry
{

private:
    int n; 
    double side; 
    double x; 
    double y; 
public: 
    Geometry(int a, double b, double c, double d)
    {
        this->n = a; 
        this->side = b; 
        this->x = c; 
        this->y = d;       
    }
    Geometry(int n, double side)
    {
        this->n = n; 
        this->side = side; 
        
    }
    void setN(int newN)
    {
        this->n = newN; 
    }
    void setSide(double newSide)
    {
        this->side = newSide; 
    }
    void setX(double newX)
    {
        this->x = newX; 
    }
    void setY(double newY)
    {
        this->y = newY; 
    }
    double getPerimeter()
    {
        return n * side; 
    }
    double getArea()
    {
        return n * pow(side,2)/ tan(3.14159/n) / 4;
    }
};

int main()
{

    Geometry poly(3, 1, 0, 0); 
    Geometry poly3(10, 4, 5.6, 7.8); 
    Geometry poly2(6, 4);
    
    std::cout << "Polygon 1 perimeter: " << poly.getPerimeter() << std::endl; 
    std::cout << "Polygon 1 area: " << poly.getArea() << std::endl; 
    std::cout << "Polygon 2 perimeter: " << poly2.getPerimeter() << std::endl; 
    std::cout << "Polygon 2 area: " << poly2.getArea() << std::endl; 
    std::cout << "Polygon 3 perimeter: " << poly3.getPerimeter() << std::endl; 
    std::cout << "Polygon 3 perimeter: " << poly3.getArea() << std::endl; 

    

}
