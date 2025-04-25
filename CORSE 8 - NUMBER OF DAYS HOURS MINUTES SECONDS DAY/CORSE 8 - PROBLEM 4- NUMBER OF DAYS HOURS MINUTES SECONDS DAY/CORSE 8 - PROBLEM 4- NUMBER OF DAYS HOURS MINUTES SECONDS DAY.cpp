// CORSE 8 - PROBLEM 4- NUMBER OF DAYS HOURS MINUTES SECONDS DAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

bool IsLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}
short NumberDaysInYear(short Year)
{
    return IsLeapYear(Year) ? 366 : 365 ;
}
short NumberHoursInYear(short Year)
{
    return NumberDaysInYear(Year) * 24;
}
int NumberMinutesInYear(short Year)
{
    return NumberHoursInYear(Year) * 60 ;
}
int NumberSecondsInYear(short Year)
{
    return NumberMinutesInYear(Year) * 60;
}
short ReadYear()
{
    short Year = 0;
    cout << "Please Enter a Year to Check?? ";
    cin >> Year;
    return Year;
}
int main()
{
    short Year = ReadYear(); 

    cout << "\nNumber of Days in Year [" << Year << "] is " << NumberDaysInYear(Year);

    cout << "\nNumber of Hours in Year [" << Year << "] is " << NumberHoursInYear(Year);

    cout << "\nNumber of Minutes in Year [" << Year << "] is " << NumberMinutesInYear(Year);

    cout << "\nNumber of Seconds in Year [" << Year << "] is " << NumberSecondsInYear(Year);

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
