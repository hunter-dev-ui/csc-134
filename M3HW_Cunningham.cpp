// CSC 134
// M3HW1 - Gold
// Name
// Date

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));   // seed the random number generator once, before the menu loop

    int menuChoice;

    do
    {
        cout << "===== M3HW1 MENU =====" << endl;
        cout << "1. Petbot" << endl;
        cout << "2. Receipt calculator" << endl;
        cout << "3. Adventure!" << endl;
        cout << "4. Math practice" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> menuChoice;
        cout << endl;

        if (menuChoice == 1)
        {
            // ------------------------------------------------------------
            // Question 1 - Simple chat bot
            // ------------------------------------------------------------
            cout << "Question 1" << endl;

            string petAnswer;

            cout << "Hi there! I'm PetBot, a very opinionated C++ program." << endl;
            cout << "Which is the better pet? Please type cats or dogs." << endl;
            cin >> petAnswer;

            if (petAnswer == "cats")
            {
                cout << "Great choice! These furballs are independent, fluffy, and they judge you silently. They may even be planning world domination!" << endl;
            }
            else if (petAnswer == "dogs")
            {
                cout << "Excellent! They are loyal, goofy, and always happy to see you. A dog could be considered mans best friend!" << endl;
            }
            else
            {
                cout << "Hmm, neither? Maybe you're a fish person. That's OK too. Blub Blub" << endl;
            }
        }
        else if (menuChoice == 2)
        {
            // ------------------------------------------------------------
            // Question 2 - Receipt calculator with dine in / takeaway tip
            // ------------------------------------------------------------
            cout << "Question 2" << endl;

            const double TAX_RATE = 0.0475;   // 4.75% tax
            const double TIP_RATE = 0.15;   // 15% tip (dine in only)

            double mealPrice;
            double taxAmount;
            double tipAmount = 0.0;
            double totalDue;
            int orderType;

            cout << "Please enter the price of the meal: $";
            cin >> mealPrice;

            cout << "Please enter 1 if the order is dine in, 2 if it is to go: ";
            cin >> orderType;

            taxAmount = mealPrice * TAX_RATE;

            if (orderType == 1)
            {
                tipAmount = mealPrice * TIP_RATE;
            }

            totalDue = mealPrice + taxAmount + tipAmount;

            cout << fixed << setprecision(2);
            cout << endl;
            cout << "------ RECEIPT ------" << endl;
            cout << "Meal price: $" << setw(8) << mealPrice << endl;
            cout << "Tax:        $" << setw(8) << taxAmount << endl;
            if (orderType == 1)
            {
                cout << "Tip (15%):  $" << setw(8) << tipAmount << endl;
            }
            cout << "---------------------" << endl;
            cout << "Total due:  $" << setw(8) << totalDue << endl;
        }
        else if (menuChoice == 3)
        {
            // ------------------------------------------------------------
            // Question 3 - Choose Your Own Adventure (nested if)
            // ------------------------------------------------------------
            cout << "Question 3" << endl;

            int firstChoice;
            int secondChoice;

            cout << "You wake up in a dark forest. You hear a growl behind you." << endl;
            cout << "What do you do?" << endl;
            cout << "1. Run toward the growling to see what it is" << endl;
            cout << "2. Climb the nearest tree" << endl;
            cout << "Enter 1 or 2: ";
            cin >> firstChoice;

            if (firstChoice == 1)
            {
                cout << "It was a very hungry bear. GAME OVER." << endl;
            }
            else if (firstChoice == 2)
            {
                cout << "From the tree you spot a cabin and a river below." << endl;
                cout << "What do you do?" << endl;
                cout << "1. Sneak to the river and swim away" << endl;
                cout << "2. Sprint to the cabin and lock the door" << endl;
                cout << "Enter 1 or 2: ";
                cin >> secondChoice;

                if (secondChoice == 1)
                {
                    cout << "The current is too strong and sweeps you away. You lose!" << endl;
                }
                else if (secondChoice == 2)
                {
                    cout << "You make it inside and the bear gives up. You win!" << endl;
                }
                else
                {
                    cout << "You hesitate too long and the bear catches you. You lose!" << endl;
                }
            }
            else
            {
                cout << "You freeze in place and never move again. GAME OVER." << endl;
            }
        }
        else if (menuChoice == 4)
        {
            // ------------------------------------------------------------
            // Question 4 - Math practice
            // ------------------------------------------------------------
            cout << "Question 4" << endl;

            int firstNumber = rand() % 100;     // 0 through 99
            int secondNumber = rand() % 100;    // 0 through 99
            int correctAnswer = firstNumber + secondNumber;
            int userAnswer;

            cout << "What is " << firstNumber << " plus " << secondNumber << "?" << endl;
            cin >> userAnswer;

            if (userAnswer == correctAnswer)
            {
                cout << "Correct!" << endl;
            }
            else
            {
                cout << "Incorrect." << endl;
            }
        }
        else if (menuChoice == 5)
        {
            cout << "Goodbye!" << endl;
        }
        else
        {
            cout << "Invalid choice. Please enter 1-5." << endl;
        }

        cout << endl;
    } while (menuChoice != 5);

    return 0;
}