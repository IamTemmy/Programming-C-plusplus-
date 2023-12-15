//in this program, we are writing a program defining the area and circumference of a circle

#include <iostream>

using namespace std;
// NAME: TEMILOLUWA ADESOLA
// JNUMBER: J00931199

int main ()

{
    int radius;
    double pi;
    double circumference;
    double area;
    
    pi = 3.141592653589793238;

//at this point, we write a program to input a certain value for the radius, which must be an integer based on its respective data type assigned to it above.//
    
    cout << "radius: ";
    cin >> radius;
     
//formulas for both the area and circumference are specified here//
    
    circumference = (2 * pi * radius);
    area = (pi * radius * radius);
    
    cout << "circumference = " << circumference << endl;
    cout << "area = " << area << endl;
    
}
