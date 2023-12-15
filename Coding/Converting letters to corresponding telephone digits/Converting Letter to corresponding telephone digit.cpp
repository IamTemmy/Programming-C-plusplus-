//CHAPTER 5 Example 5
//The  following  program  reads  the  letter  codes  A  to  Z  and  prints  the  corresponding  telephone 
//digit.  This  program  uses  a  sentinel-controlled  while  loop.  To  stop  the  program, the user is 
//prompted for the sentinel, which is #. This is also an example of a nested control structure, where if...else
//and the while loop are nested

#include  <iostream>
using namespace std;

int main()
{
    char letter;
    int digit, num;
    
    cout << "Program to convert uppercase letters to their telephone digits "
         << "their corresponding telephone digits" << endl;
    
    cout << "To stop the program enter #." << endl;
    
    cout << "Enter an uppercase letter: ";
    cin >> letter;
    cout << endl;
    
    while (letter != '#')
    {
        cout << "Letter: " << letter;
        cout << "' Corresponding telephone digit: ";
        num = static_cast<int>(letter) - static_cast<int>('A');
    
    if (0 <= num && num < 26)
    {
        digit = (num / 3) + 2;
        
        if (((num / 3 == 6 ) || (num / 3 == 7)) && (num % 3 == 0)) digit = digit - 1;
        if (digit > 9) digit = 9;
        
        cout << digit << endl;
    }
        else
            cout << "Invalid input." << endl;
        cout << "\nEnter another uppercase "
             << "letter to find its corresponding "
             << "telephone digit." << endl;
        cout << "To stop the program enter #."
             << endl;
             
        cout  << "Enter a letter: ";
        cin >> letter;
        cout << endl;
    }
return 0;

}
