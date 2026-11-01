// CSC 134
// Grade Converter - M3LAB2
// Hunter Cunningham
// 10/18/2026

#include <iostream>
using namespace std;

int main()
{
    int numericGrade;
    char letterGrade;

    cout << "Enter a numerical grade (0-100): ";
    cin >> numericGrade;

    if (numericGrade >= 90 && numericGrade <= 100)
    {
        letterGrade = 'A';
    }
    else if (numericGrade >= 80 && numericGrade <= 89)
    {
        letterGrade = 'B';
    }
    else if (numericGrade >= 70 && numericGrade <= 79)
    {
        letterGrade = 'C';
    }
    else if (numericGrade >= 60 && numericGrade <= 69)
    {
        letterGrade = 'D';
    }
    else if (numericGrade >= 0 && numericGrade <= 59)
    {
        letterGrade = 'F';
    }
    else
    {
        cout << "Invalid grade. Please enter a number from 0 to 100." << endl;
        return 0;   // stop here, there is no letter grade to display
    }

    cout << "Your letter grade is: " << letterGrade << endl;

    return 0;
}