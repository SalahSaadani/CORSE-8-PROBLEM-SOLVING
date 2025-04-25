// CORSE 8 - PROBLEM 7 - DAY NAME.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

short DayOfWeekOrder(short Day, short Month, short Year)
{
    short A, M, Y;
    A = (14 - Month) / 12;
    Y = Year - A;
    M = Month + (12*A) - 2;

    return(Day + Y + (Y / 4) - (Y / 100) + (Y / 400) + ((31 * M) / 12)) % 7;
}
string DayShortName(short DayOfWeekOrder)
{
    string ArrDayNames[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
    return ArrDayNames[DayOfWeekOrder];
}
short ReadYear()
{
    short Year = 0;
    cout << "Please Enter a Year?\n";
    cin >> Year;
    return Year;
}
short ReadMonth()
{
    short Month = 0;
    cout << "Please Enter a Month??\n";
    cin >> Month;
    return Month;
}
short ReadDay()
{
    short Day = 0;
    cout << "Please Enter a Day??\n";
    cin >> Day;
    return Day;
}
int main()
{
    short Year = ReadYear();
    short Month = ReadMonth();
    int Day = ReadDay();

    cout << " Date : " << Day << " / " << Month << " / " << Year << endl;
    cout << " Day Oreder :" << DayOfWeekOrder(Day, Month, Year) << endl;
    cout << " Day Name : " << DayShortName(DayOfWeekOrder(Day, Month, Year)) << endl;

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
