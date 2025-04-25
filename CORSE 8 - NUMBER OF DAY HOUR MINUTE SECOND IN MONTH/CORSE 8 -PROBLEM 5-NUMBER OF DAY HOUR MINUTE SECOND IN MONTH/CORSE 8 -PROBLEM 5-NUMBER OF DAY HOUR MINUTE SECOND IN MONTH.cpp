// CORSE 8 -PROBLEM 5-NUMBER OF DAY HOUR MINUTE SECOND IN MONTH.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

bool IsLeapYear(short Year )
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}
short NumberDaysInMonth(short Month,short Year)
{
    if (Month < 1 || Month > 12)
        return 0;

    if (Month == 2)
    {
        return IsLeapYear(Year) ? 29 : 28;
    }

    short Arr31Days[7] = { 1,3,5,7,8,10,12 };

    for (short i = 0; i < 7; i++)
    {
        if (Arr31Days[i] == Month)
            return 31;
    }

    return 30;
}
short NumberHoursInMonth(short Month,short Year)
{
    return NumberDaysInMonth(Month ,Year) * 24;
}

int NumberMinutesInMonth(short Month ,short Year)
{
    return NumberHoursInMonth(Month,Year) * 60;
}
int NumberSecondsInMonth(short Month, short Year)
{
    return NumberMinutesInMonth(Month,Year) * 60;
}
short ReadYear()
{
    short Year = 0;
    cout << "Please Enter a Year to Check?? ";
    cin >> Year;
    return Year;
}
short ReadMonth()
{
    short Year = 0;
    cout << "Please Enter a Month to Check?? ";
    cin >> Year;
    return Year;
}
int main()
{
    short Year = ReadYear();
    short Month = ReadMonth();
    
    cout << "\nNumber of Days in Month [" << Month << "] is " << NumberDaysInMonth(Month,Year);

    cout << "\nNumber of Hours in Month [" << Month << "] is " << NumberHoursInMonth(Month,Year);

    cout << "\nNumber of Minutes in Month [" << Month << "] is " << NumberMinutesInMonth(Month,Year);

    cout << "\nNumber of Seconds in Month [" << Month << "] is " << NumberSecondsInMonth(Month,Year);

    system("pause>0");
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
