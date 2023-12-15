#include <iostream>
using namespace std;
int main ()

{
    int SECRET;
    double RATE;
    
    SECRET = 11;
    RATE = 12.50;
    
    int num1;
    int num2;
    int newNum;
    double newNum1;
    double hoursworked;
    double wages;
    string name;
    
    cout << "enter num1: ";
    cin >> num1;
    cout << "enter num2: ";
    cin >> num2;
    cout << "Name: ";
    cin >> name;
    cout << "Hours worked: ";
    cin >> hoursworked;
    
    newNum = (num1 * 2) + num2;
    newNum1 = (SECRET + newNum);
    wages = (RATE * hoursworked);
    
    cout << name << " worked a total of " << hoursworked << " hours this week " << endl;
    cout << "Name: " << name << endl;
    cout << "Pay Rate: $" << RATE << endl;
    cout << "Hours Worked: " << hoursworked << endl;
    cout << "Salary: $" << wages << endl;
    
    cout << endl;
}