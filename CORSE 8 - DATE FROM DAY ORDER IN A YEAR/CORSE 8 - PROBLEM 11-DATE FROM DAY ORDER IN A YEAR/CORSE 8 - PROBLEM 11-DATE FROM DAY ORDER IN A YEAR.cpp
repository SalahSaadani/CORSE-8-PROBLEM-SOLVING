// CORSE 8 - PROBLEM 11-DATE FROM DAY ORDER IN A YEAR.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

bool isLeapYear(short Year)
{
    // if year is divisible by 4 AND not divisible by 100
    // OR if year is divisible by 400
    // then it is a leap year
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}
short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month>12)
        return 0;

    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}
short NumbreOfDaysFromtheBeginningOfTheYear(short Day, short Month, short Year)
{
    short TotalDays = 0;
    for (int i = 1; i <= Month - 1; i++)
    {
        TotalDays += NumberOfDaysInAMonth(i, Year);
    }
    TotalDays += Day;

    return TotalDays;
}
struct sDate
{
    short Day;
    short Month;
    short Year;
};
sDate GetDateFromDayOrderInAYear(short DaysOrderInYear, short Year)
{
    sDate Date;
    short RemainingDays = DaysOrderInYear;
    short MonthDays = 0;

    Date.Year = Year;
    Date.Month = 1;
    while (true)
    {
        MonthDays = NumberOfDaysInAMonth(Date.Month, Year);
        if (RemainingDays > MonthDays)
        {
            RemainingDays -= MonthDays;
            Date.Month++;
        }
        else
        {
            Date.Day = RemainingDays;
            break;
        }
    }

    return Date;
}
short ReadDay()
{
    short Day;
    cout << "Please Enter a Day?\n";
    cin >> Day;
    return Day;
}
short ReadMonth()
{
    short Month;
    cout << "Please Enter a Month?\n";
    cin >> Month;
    return Month;
}
short ReadYear()
{
    short Year;
    cout << "Please Enter a Year?\n";
    cin >> Year;
    return Year;
}
int main()
{
    short Day = ReadDay();
    short Month = ReadMonth();
    short Year = ReadYear();
    short DaysOrderInYear = NumbreOfDaysFromtheBeginningOfTheYear(Day, Month, Year);

    cout << " Nombre Of Days From th Beginning Of The Year is :" << DaysOrderInYear;

    sDate Date;
    Date = GetDateFromDayOrderInAYear(DaysOrderInYear, Year);

    cout << "Date for [" << DaysOrderInYear << "] is: ";
    cout << Date.Day << "/" << Date.Month << "/" << Date.Year;

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
