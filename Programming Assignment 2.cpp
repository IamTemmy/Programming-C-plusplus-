//C++ Common Structure

#include<iostream>

using namespace std;

//name of base class circleType

class circleType
{
//public members and functions of class circleType
    public:
//defined member functions
        void setCenter(double x, double y)
        {
            xcoordinate = x;
            ycoordinate = y;
        }
        void setRadius(double r)
        {
            if(r >= 0)
            {
                radius = r;
            }
            else
            {
                radius = 0;
            }
        }
//print function supposed to define radius, area, and circumference of a circle
        void print()
        {
            cout << "The radius of the circle is: " << radius << endl;
            cout << "The area of the circle is: " << area() << endl;
            cout << "The circumference of the circle is: " << circumference() << endl;
        }
        double getRadius()
        {
            return radius;
        }
        double area()
        {
            return 3.142 * radius * radius;
        }
        double circumference()
        {
            return 2 * 3.142 * radius;
        }
        circleType(double r = 0, double x = 0, double y = 0)
        {
            setRadius(r);
            setCenter(x,y);
        }
        
//private members of class circleType 
    private:
        double radius;
        double xcoordinate;
        double ycoordinate;
};

//derived class cylinderType from base class circleType
class cylinderType: public circleType
{
//public members and functions of cylinderType
    public:
        void setHeight(double h)
        {
            height = h;
        }
        double getHeight() 
        {
            return height;
        }
//print function supposed to defined the volume and surface area of cylinder
        void print()
        {
            cout << "The volume of the cylinder is: " << getVolume() << endl;
            cout << "The Surface Area of the cylinder is: " << getSurfaceArea() << endl;
        }
        double getVolume() 
        {
            return 3.142 * getRadius() * getRadius() * height;
        }
        double getSurfaceArea() 
        {
            return 2 * 3.142 * getRadius() * (getRadius() + height);
        }
        cylinderType(double r, double x, double y, double h)
                :circleType(r, x, y)
        {
            height = h;
        }
        
//private member of derived class cylinderType    
    private:
        double height;
};

//main c++ program
int main()
{
//variable declarations for radius r, and height h.
    double r;
    double h;
    
    cout << "Enter base radius of cylinder (ft): ";
    cin >> r;
    
    cout << "Enter height of cylinder (ft): ";
    cin >> h;
    
// created object cylinder1 from class cylinderType
    cylinderType cylinder1(4, 0, 0, 5);

//variable declarations for cost of shipping and painting
    double ship_cost;
    double paint_cost;
    
    cout << "Enter shipping cost per liter: $";
    cin >> ship_cost;
    
    cout << "Enter paint cost per square foot: $";
    cin >> paint_cost;
    cout << endl;
    
    double shipping_cost;
    double painting_cost;
    
//expression to find cost of shipping and painting
    shipping_cost = ship_cost * cylinder1.getVolume() * 28.32;
    painting_cost = paint_cost * cylinder1.getSurfaceArea();
    
//ouput statement expressing finalised cost of shipping and painting
    cout << "Cost of shipping: $" << shipping_cost << endl;
    cout << "Cost of painting: $" << painting_cost << endl;
    
    return 0;
    
}