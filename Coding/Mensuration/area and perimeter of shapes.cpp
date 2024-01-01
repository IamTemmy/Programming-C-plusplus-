//This code calculates the area and perimeter of a rectangle with a given length 
//and width; calculates the area of a traingle; calculates the area and circumference of a circle 
//with a specified raidus; and calculate the volume and surface area of a cylinder.

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    
//variable names needed to make this program work are declared here

    string shape;
    double height;
    double length;
    double base;
    double width;
    double radius;
    double PI;

//the value of PI which is 3.141592653589793238, is assigned below

    PI = 3.141592653589793238;
    
//here you input the type of shape out the the three - rectangle, triangle, circle, cylinder - you wish to work with

    cout << "Enter the shape type: rectangle, triangle, circle, cylinder" << endl;
    cin >> shape;
    cout << endl;
    
//we make use of the if and else if stamements in respect to selected shape you wish to work with.
    
    if (shape == "rectangle")
    {
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << endl;
        
        cout << "Perimeter of the rectangle = " << 2 * (length + width) << endl;
        
        cout << "Area of the rectangle = " << (length * width) << endl;
     }
     
     else if (shape == "triangle")
    {
        cout << "Enter the base of the triangle: ";
        cin >> base;
        cout << endl;
        
        cout << "Enter the height of the triangle: ";
        cin >> height;
        cout << endl;
        
        cout << "Area of the triangle = " << 0.5 * base * height << endl;
             
    }
    
    else if (shape == "circle")
    {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << endl;
        
        cout << "Area of the circle = " << PI * pow(radius, 2.0) << endl;
             
             
        cout << "circumference of the circle: " << 2 * PI * radius << endl;
    }
    
    else if (shape == "cylinder")
    {
        cout << "Enter the height of the cylinder ";
        cin >> height;
        cout << endl;
         
        cout << "Volume of the cylinder = " << PI * pow(radius, 2.0) * height << endl;
             
        cout << "Surface area of the cylinder: " << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0)
             << endl;
     }
     
//here I have written a program to let you know if you have misspelled a shape, or put in a shape that is not in
//the program

     else if (shape != "rectangle, triangle, circle, cylinder")
     {
         cout << "The shape does not exist in the program (also make sure your spelling is right)" << endl;
     }

return 0;

}
