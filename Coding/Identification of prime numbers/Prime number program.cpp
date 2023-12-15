//CHAPTER 4 PROGRAMMING EXERCISE 22
//In this program, we find the prime numbers between 1 - 1000 (inclusive)

#include <iostream>
#include <cmath>

using namespace std;

// NAME: TEMILOLUWA ADESOLA
// JNUMBER: J00931199

int main()
{

//"a" represents the entered value between 1 and 1000, and the program is ran to check if a is a prime number

    int a;
    cout << "Input value of integer: " << endl;
    cin >> a;
    
//here we declare a is greater than 0 and less than or equal to 1000

    a > 0;
    a <= 1000;
    
    //             0 1 2 3 4 5 6 7 8 9 10 11 12
    int array[] = {2,3,5,7,11,13,17,19,23,29,31};
    
//if "a" is larger than a 1000, a smaller number is requested and vice versa
    
    if (a > 1000)
    {
        cout << " enter smaller number " << endl;
        return 0;
    }
    
    else if (a < 1)
    {
        cout << " enter larger number " << endl;
        return 0;
    }
    
    for(int i = 0;i<11;i++){
        if(a == array[i]){
            cout << a << " is one of the first eleven prime numbers" << endl;
            return 0;
        }
    }
    
//for loop statement to bring out numbers in the array one by one

    for(int i = 0;i<11;i++){
        if(a % array[i] == 0){
            cout << "Prime number(s) it is divisible by: " << array[i] << endl;
            cout << a << " is not a prime number" << endl;
            return 0;
        }
    }
    
//prints out if inputed value of a is not divisible by any of the first eleven prime numbers
//hence in this case, a is a prime number

    cout << a << " is a prime number" << endl;
   
}
