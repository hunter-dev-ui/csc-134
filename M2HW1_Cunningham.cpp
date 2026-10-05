/*
CSC 134
M2HW1 - Gold
Hunter Cunningham
10/5/2026
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// ---------- Question 1: Banking ----------
void question1()
{
    string name;
    double startingBalance, deposit, withdrawal, finalBalance;
    int accountNumber;

    cout << "Enter the name on the account: ";
    getline(cin, name);
    cout << "Enter the starting account balance: $";
    cin >> startingBalance;
    cout << "Enter the amount of the deposit: $";
    cin >> deposit;
    cout << "Enter the amount of the withdrawal: $";
    cin >> withdrawal;

    srand(static_cast<unsigned>(time(0)));
    accountNumber = 100000 + rand() % 900000;
    finalBalance = startingBalance + deposit - withdrawal;

    cout << fixed << setprecision(2);
    cout << "\n--- Account Summary ---\n";
    cout << "Name on account:       " << name << endl;
    cout << "Account number:        " << accountNumber << endl;
    cout << "Final account balance: $" << finalBalance << endl;
}

// ---------- Question 2: General Crates ----------
void question2()
{
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

    double length, width, height, volume, cost, charge, profit;

    cout << "Enter the crate length (feet): ";
    cin >> length;
    cout << "Enter the crate width (feet): ";
    cin >> width;
    cout << "Enter the crate height (feet): ";
    cin >> height;

    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    cout << fixed << setprecision(2);
    cout << "\nVolume of the crate:  " << volume << " cubic feet" << endl;
    cout << "Cost to build:        $" << cost << endl;
    cout << "Customer charge:      $" << charge << endl;
    cout << "Profit:               $" << profit << endl;
}

// ---------- Question 3: Pizza Party ----------
void question3()
{
    const int SLICES_PER_VISITOR = 3;
    int pizzas, slicesPerPizza, visitors, leftover;

    cout << "How many pizzas are you ordering? ";
    cin >> pizzas;
    cout << "How many slices per pizza? ";
    cin >> slicesPerPizza;
    cout << "How many visitors are coming? ";
    cin >> visitors;

    leftover = pizzas * slicesPerPizza - visitors * SLICES_PER_VISITOR;

    if (leftover >= 0)
        cout << "Slices left over: " << leftover << endl;
    else
        cout << "You are short " << -leftover << " slices!" << endl;
}

// ---------- Question 4: Cheer ----------
void question4()
{
    string letsGo, school, team, cheerOne, cheerTwo;

    letsGo = "Let's go";
    school = "FTCC";
    team = "Trojans";
    cheerOne = letsGo + " " + school;
    cheerTwo = letsGo + " " + team;

    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;
}

// ---------- Main menu ----------
int main()
{
    int choice;

    cout << "Which question do you want to run?\n";
    cout << "1) Banking\n2) General Crates\n3) Pizza Party\n4) Cheer\n";
    cout << "Choice: ";
    cin >> choice;
    cin.ignore(1000, '\n');   // clears the newline so getline in question1 works

    switch (choice)
    {
        case 1: question1(); break;
        case 2: question2(); break;
        case 3: question3(); break;
        case 4: question4(); break;
        default: cout << "Invalid choice." << endl;
    }

    return 0;
}