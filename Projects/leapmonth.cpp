#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
        int month;
    int year;

    cout << "enter a month between 1-12: ";
    cin >> month;
    cout << "enter a year: ";
    cin >> year;

    if (month == 2)
    {
        if (year % 100 == 0 && year % 400 == 0)
        {
            cout << "Its a leap year and it has 29 days.\n";
        }
        else if (year % 100 != 0 && year % 4 == 0)
        {
            cout << "The year " << year << "and it has 29 days.\n";
        }
        else
        {
            cout << "Its has 28 days.\n";
        }
    }
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        cout << "It has 31 days.\n";
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        cout << "It has 30 days.\n";
    }

    return 0;
}