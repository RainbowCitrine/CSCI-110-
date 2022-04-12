#include <iostream>
#include <cmath>
using namespace std;

class RegularPolygon
{
private:
  int n;
  double side;
  double x;
  double y;

public:
  RegularPolygon()
  {
    n = 3;
    side = 1;
    x = 0;
    y = 0;
  }

  RegularPolygon(int n, double side)
  {
    this->n = n;
    this->side = side;
    x = 0;
    y = 0;
  }

  RegularPolygon(int n, double side, double x, double y)
  {
    this->n = n;
    this->side = side;
    this->x = x;
    this->y = y;
  }

  int getN() const
  {
    return n;
  }

  void setN(int n)
  {
    this->n = n;
  }

  double getSide() const
  {
    return side;
  }

  void setSide(double side)
  {
    this->side = side;
  }

  double getX() const
  {
    return x;
  }

  void setX(double x) 
  {
    this->x = x;
  }

  double getY() const
  {
    return y;
  }

  void setY(double y)
  {
    this->y = y;
  }

  double getPerimeter() const
  {
    return n * side;
  }

  double getArea() const
  {
    return n * side * side / tan(3.14159 / n) / 4;
  }
};

int main()
{
  RegularPolygon polygon1;
  RegularPolygon polygon2(6, 4);
  RegularPolygon polygon3(10, 4, 5.6, 7.8);

  cout << "Polygon 1 perimeter: " << polygon1.getPerimeter() << endl;
  cout << "Polygon 1 area: " << polygon1.getArea() << endl;
  cout << "Polygon 2 perimeter: " << polygon2.getPerimeter() << endl;
  cout << "Polygon 2 area: " << polygon2.getArea() << endl;
  cout << "Polygon 3 perimeter: " << polygon3.getPerimeter() << endl;
  cout << "Polygon 3 area: " << polygon3.getArea() << endl;

  return 0;
}
