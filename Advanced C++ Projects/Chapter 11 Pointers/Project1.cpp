#include <iostream> 
const int SIZE = 2;
const int NUMBER_OF_POINTS = 5;
class Rectangle2D
{

private: 
    double x; 
    double y; 
    double height; 
    double width; 
    
public: 
    Rectangle2D(); 
    Rectangle2D(double, double, double, double); 
    Rectangle2D(double, double); 
    void setHeight(double); 
    void setWidth(double); 
    void setX(double); 
    void setY(double); 
    double getHeight(); 
    double getWidth(); 
    double getX(); 
    double getY(); 
    double getArea(); 
    double getPerimeter();  
    Rectangle2D getRectangle(const double points[][SIZE]); 
    Rectangle2D* getRectanglePointer(const double points[][SIZE]);
};

void Rectangle2D::setHeight(double newHeight)
{
   height = newHeight; 
}
void Rectangle2D::setWidth(double newWidth)
{
    width = newWidth; 
}
void Rectangle2D::setX(double newX)
{
    x = newX;
}
void Rectangle2D::setY(double newY)
{
    y = newY; 
}
double Rectangle2D::getHeight()
{
    return height; 
}
double Rectangle2D::getWidth()
{
    return width; 
}
double Rectangle2D::getX()
{
    return x; 
}
double Rectangle2D::getY()
{
    return y; 
}
Rectangle2D::Rectangle2D()
{
    this->width = 1; 
    this->height = 1; 
}
Rectangle2D::Rectangle2D(double sX, double sY)
{
    this->x = sX; 
    this->y = sY; 
}
Rectangle2D::Rectangle2D(double yy, double xx, double hheight, double wwidth)
{
    this->y = yy; 
    this->x = xx; 
    this->height = hheight; 
    this->width = wwidth; 
}

double Rectangle2D::getArea()
{
    return width * height; 
}
double Rectangle2D::getPerimeter()
{
    return 2 * (height + width); 
}
Rectangle2D Rectangle2D::getRectangle(const double points[][SIZE])
{
    double xMax = points[0][0];
    double xMin = points[0][0];
    double yMax = points[0][1];
    double yMin = points[0][1];

    for(int currentPoint = 0; currentPoint < NUMBER_OF_POINTS; currentPoint++)
    {
        double currentX = points[currentPoint][0];
        double currentY = points[currentPoint][1];

        if(currentX > xMax)
        {
            xMax = currentX;
        }
        if(currentX < xMin)
        {
            xMin = currentX;
        }
        if(currentY > yMax)
        {
            yMax = currentY;
        }
        if(currentY < yMin)
        {
            yMin = currentY;
        }
    }
    // xMin xMax yMin yMax
    double width = xMax - xMin;
    double height = yMax - yMin;
    double xCenter = (width / 2) + xMin;
    double yCenter = (height / 2) + yMin;

    Rectangle2D boundedRectangle(xCenter, yCenter, height, width);

    return boundedRectangle;


}

Rectangle2D* Rectangle2D::getRectanglePointer(const double points[][SIZE])
{
    Rectangle2D tempBoundRectangle = Rectangle2D().getRectangle(points);
    Rectangle2D* boundedRectangle = new Rectangle2D(tempBoundRectangle);
    return boundedRectangle;
}

int main()
{
    double myArray[NUMBER_OF_POINTS][SIZE];

    std::cout << "Enter five points: "; 
    for(int row = 0; row < NUMBER_OF_POINTS; row++)
    {
        for(int col = 0; col < SIZE; col++)
        {
            std::cin >> myArray[row][col];
        }
    }

    Rectangle2D myBR = Rectangle2D().getRectangle(myArray);
    Rectangle2D* myBRPtr = Rectangle2D().getRectanglePointer(myArray);
    std::cout << "The bounding rectangle's ceneter (" << myBRPtr->getY() << ", " << myBRPtr->getX() << "), width " << myBRPtr->getWidth() << ", height " << myBRPtr->getHeight();

}
