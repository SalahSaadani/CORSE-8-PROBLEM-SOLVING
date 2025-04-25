// CORSE 8 - PROBLEM 9 - YEAR CALENDAR.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
short DayOfWeekOrder(short Day, short Month, short Year)
{
    short a, y, m;
    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;
    // Gregorian:
    //0:sun, 1:Mon, 2:Tue...etc
    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}
string DayShortName(short DayOfWeekOrder)
{
    string arrDayNames[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
    return arrDayNames[DayOfWeekOrder];
}
short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month>12)
        return 0;

    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}
string MonthShortName(short MonthNumber)
{
    string Months[12] = { "Jan", "Feb", "Mar","Apr", "May", "Jun","Jul", "Aug", "Sep",
    "Oct", "Nov", "Dec" };

    return (Months[MonthNumber - 1]);
}
void PrintMonthCalendar(short Month, short Year)
{
    int NumberOfDays;

    // Index of the day from 0 to 6
    int current = DayOfWeekOrder(1, Month, Year);

    NumberOfDays = NumberOfDaysInAMonth(Month, Year);

    // Print the current month name
    printf("\n _______________%s_______________\n\n", MonthShortName(Month).c_str());

    // Print the columns
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");

    // Print appropriate spaces
    int i;
    for (i = 0; i < current; i++)
        printf("    ");

    for (int j = 1; j <= NumberOfDays; j++)
    {
        printf("%4d", j);

        if (++i == 7)
        {
            i = 0;
            printf("\n");
        }
    }
    printf("\n _________________________________\n");
}
void PrintYearCalendar(short Year)
{
    printf("\n_______________________________\n\n");
    printf( "         Calendar - %d\n", Year);
    printf(" _______________________________\n");

    for (short i = 1; i <= 12; i++)
    {
        PrintMonthCalendar(i, Year);
    }
}
short ReadYear()
{
    short Year = 0;
    cout << "Please Enter a Year?\n";
    cin >> Year;
    return Year;
}
int main()
{
   
    PrintYearCalendar(ReadYear());

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
