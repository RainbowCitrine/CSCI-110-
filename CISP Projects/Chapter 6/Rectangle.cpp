#include <iostream> 

class Rectangle
{
 
  
 
  
  public: 
  Rectangle(double, double); 
  double getArea(); 
  double getPerimeter(); 
  double width; 
  double height; 
  
    
};

  Rectangle::Rectangle(double newWidth, double newHeight)
  {
      width = newWidth; 
      height = newHeight; 
  }
  double Rectangle::getArea()
  {
      return width * height; 
  }
  double Rectangle::getPerimeter()
  {
      return width + height + width + height; 
  }
  
  int main()
  {
      Rectangle rectangle1(4, 40); 
      Rectangle rectangle2(3.5, 35.9); 
      std::cout << "The width is " << rectangle1.width << "\nThe height is " << rectangle1.height
      <<"\nThe area is " << rectangle1.getArea() << "\nThe perimeter is " << rectangle1.getPerimeter() << std::endl;
      std::cout << "The width is " << rectangle2.width << "\nThe height is " << rectangle2.height
      <<"\nThe area is " << rectangle2.getArea() << "\nThe perimeter is " << rectangle2.getPerimeter() << std::endl;  
  }
  
