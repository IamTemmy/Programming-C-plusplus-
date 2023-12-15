//CHAPTER 4 PROGRAMMING EXERCISE 7
// This program is used to find the roots of a quadratic equation, making use of the Discriminant (D).

#include <iostream>
#include <cmath>

using namespace std;

// NAME: TEMILOLUWA ADESOLA
// JNUMBER: J00931199

int main()
{
    
// the letter "D" assigned to the variable double represent the Discriminant

    int a;
    int b;
    int c;
    double D;
    double R1;
    double R2;

//input values for a, b, and c where a represents the coefficient of x^2, b represents the coefficient of x and 
// c is the constant term

    cout << " Input value of a: ";
    cin >> a;
    
    cout << " Input value of b: ";
    cin >> b;
    
    cout << " Input value of c: ";
    cin >> c;
 
 // The power(pow) function and square root(sqrt) function are been used for the general formula
 
    D = (pow(b, 2.0) - (4 * a * c));
    R1 = (- b + sqrt(D)) / (2 * a);
    R2 = (- b - sqrt(D)) / (2 * a);
    
//Make use of the if and else statements to determine if the value of the Discriminant(D) is equal to, less than,
//greater than zero.

    if (D == 0)
    {
        cout << " The equation has a single (repeated) root, the Discriminant = "<< D << endl;
        cout << " The two roots R1 and R2 = " << R1 << endl;
    }
    
    else if (D > 0)
    {
        cout << " The equation has two real roots, the Discriminant = " << D << endl;
        cout << " The first root R1 = " << R1 << endl;
        cout << " The second root R2 = " << R2 << endl;
    }
    
    else if (D < 0)
    {
        cout << " The equation has two complex roots, the Discriminant = " << D << endl;
        cout << " The first root R1 = " << R1 << endl;
        cout << " The second root R2 = " << R2 << endl;
    }
    
return 0;    
    
}