// CORSE 8 - PROBLEM 2- LEAP YEAR.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

bool IsLeapYear(int Year)
{
    if (Year % 400 == 0)
    {
        return true;
    }
    else if (Year % 100 == 0)
    {
        return false;
    }
    else if (Year% 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int ReadYear()
{
    int Year = 0;
    cout << "Please Enter Your Number?? ";
    cin >> Year;
    return Year;
}
int main()
{
    int Year = ReadYear();

    if (IsLeapYear(Year))
        cout << "\nYes , The year " << Year << " is Leap year\n";
    else 
        cout << "\nNo , The year " << Year << " is Not Leap year\n";
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
