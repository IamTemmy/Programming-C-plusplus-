//Common C++ Structure

#include<iostream>
#include<cmath>

using namespace std;

//name of class is declared = dayType
//class
class dayType
{
//public member functions and member variables are declared here
//public class members
    public:
//inline definition of member functions and member variables
//the set function sets given day
        void setDay(string a)
        {
            day = a;
        }
//prints out selected day in object
        void print()
        {
            cout << day << endl;
        }
        string getDay()
        {
            return day;
        }
//for a given day, defined function returns next day
        string getNextDay()
        {
            for (int i = 0; i < 7; i++)
            {
                if(day == daysInWeek[6])
                {
                    return daysInWeek[0];
                }
                else if(day == daysInWeek[i])
                {
                    return daysInWeek[i+1];
                }
            }
        return 0;
        }
        string getPreviousDay()
        {
            for (int i = 0; i < 7; i++)
            {
                if(day == daysInWeek[0])
                {
                    return daysInWeek[6];
                }
                else if(day == daysInWeek[i])
                {
                    return daysInWeek[i-1];
                }
            }
        return 0;    
        }
        string getDayAfter(int b)
        {
            int dayInc = b % 7;
//if the increased number of days is greater than 7
            for (int i = 0; i < 7; i++)
            {
                if(day == daysInWeek[i])
                {
//if days left in the array from selected day are less than 7
                    if(dayInc > 6 - i)
                    {
                    return daysInWeek[dayInc - 7 + i];
                    }
                    else
                    {
                    return daysInWeek[i + dayInc];
                    }
                }
            }
        return 0;    
        }
        string getDayBefore(int c)
        {
            int dayDec = c % 7;
            for (int i = 0; i < 7; i--)
            {
//if the decreased number of days is greater than 7
                if(day == daysInWeek[i])
                {
//if days before selected day are less than 7 
//abs function used here because (6 - i) can be a nagtive value
                    if(dayDec > abs(6 - i))
                    {
                    return daysInWeek[abs(dayDec - 7 - i)];
                    }
                    else
                    {
                    return daysInWeek[abs(i - dayDec)];
                    }
                }
            }
        return 0;    
        }
//default constructor in program
        dayType()
        {
        }
//constructor with specified parameter
        dayType(string a)
        {
            day = a;
        }
    
//private member fucntions and member variables are declared here   
//private class members
    private:
        string day;
//array used to represent days of the week, depending on specific day mentioned by user
        string daysInWeek[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
};

//Common C++ structure
int main()
{
//class object created "selectDay"
   dayType selectDay("Sun");
   
//if day = Sun, cout "Selected day is Sun"
//if day = Sun, cout "Next day is Mon"
//if day = Sun, cout "Previous day is Sat"
//if day = Sun, cout ""Day in 6 days is Sat"
//if day = Sun, cout "4 days before is Thu"
    
    cout << "Selected day is " << selectDay.getDay() << endl;
    cout << "Next day is " << selectDay.getNextDay() << endl;
    cout << "Previous day is " << selectDay.getPreviousDay() << endl;
    cout << "Day in 6 days is " << selectDay.getDayAfter(6) << endl;
    cout << "4 days before is " << selectDay.getDayBefore(4) << endl;
    cout << endl;
    
//if day = Wed, cout "Selected day is Wed"
//if day = Wed, cout "Next day is Thu"
//if day = Wed, cout "Previous day is Fri"
    selectDay.setDay("Wed");
    cout << "Selected day is " << selectDay.getDay() << endl;
    cout << "Day after 15 days is " << selectDay.getDayAfter(15) << endl;
    cout << "18 days before selected day is " << selectDay.getDayBefore(18) << endl;
    
    return 0;
}

//Temmy
