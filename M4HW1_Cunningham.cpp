// CSC-134
// M4HW1 - Gold
// Hunter Cunningham
// 11/1/2026


#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number from 1 to 12? ";
    cin >> number;

    while (number < 1 || number > 12)
    {
        cout << "Invalid number. Please enter a number from 1 to 12? ";
        cin >> number;
    }

    int counter = 1;

    while (counter <= 12)
    {
        cout << number << " times " << counter << " is "
             << number * counter << "." << endl;
        counter++;
    }

    return 0;
}