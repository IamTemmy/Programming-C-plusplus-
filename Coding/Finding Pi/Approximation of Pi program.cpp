//Page 340 Programming Exercise: Question 2
//In this program we are approximating the value of Pi
//according to the question, we are going to debug and rearrange the program

#include <iostream>
#include <iomanip>

using namespace std;

// NAME: TEMILOLUWA ADESOLA

int main()
{
    double pi;
    long i;
    long n;
    
    cout << "Enter the value of n: ";
    cin >> n;
    cout << endl;
    
    for (i = 0; i < n; i++)
    {
    if (i % 2 == 0)
       pi = pi + (1 / (2 * 1 + 1));
    else
       pi = pi - (1 / (2 * 1 + 1));
    }
    
    cout  << endl << "pi = " << pi << endl;
    
return 0;

}
