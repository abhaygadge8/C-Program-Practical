#include <iostream>
#include <iomanip>

using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) 
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a month
int getDaysInMonth(int month, int year) 
{
    switch (month) 
	{
        case 1: return 31; // January
        case 2: return isLeapYear(year) ? 29 : 28; // February
        case 3: return 31; // March
        case 4: return 30; // April
        case 5: return 31; // May
        case 6: return 30; // June
        case 7: return 31; // July
        case 8: return 31; // August
        case 9: return 30; // September
        case 10: return 31; // October
        case 11: return 30; // November
        case 12: return 31; // December
        default: return 0;
    }
}

// Function to get the day of the week for the first day of a given year
int getFirstDayOfYear(int year) 
{
    // Using Zeller's Congruence algorithm to find the day of the week for January 1st
    int q = 1; // Day of the month
    int m = 13; // Month (January is treated as 13 of the previous year)
    int K = (year - 1) % 100; // Year of the century
    int J = (year - 1) / 100; // Zero-based century

    int f = q + (13*(m+1))/5 + K + K/4 + J/4 + 5*J;
    int dayOfWeek = f % 7;

    return (dayOfWeek + 5) % 7; // Adjusting to make 0=Sunday, 1=Monday, ..., 6=Saturday
}

// Function to print the calendar for a given year
void printCalendar(int year) 
{
    string months[] = 
	{
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    int daysInMonth[] = {
        31, isLeapYear(year) ? 29 : 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    int dayOfWeek = getFirstDayOfYear(year);

    for (int month = 0; month < 12; ++month) 
	{
        cout << "\n\n  ------------" << months[month] << " " << year << "------------\n";
        cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";

        for (int i = 0; i < dayOfWeek; ++i) 
		{
            cout << "     ";
        }

        int days = daysInMonth[month];
        for (int day = 1; day <= days; ++day) 
		{
            cout << setw(5) << day;
            if (++dayOfWeek > 6) 
			{
                dayOfWeek = 0;
                cout << endl;
            }
        }

        if (dayOfWeek != 0) 
		{
            cout << endl;
        }
    }
}

int main() 
{
    int year;
    cout << "Enter a year: ";
    cin >> year;

    printCalendar(year);

    return 0;
}

