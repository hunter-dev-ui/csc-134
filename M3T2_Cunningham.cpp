// CSC 134
// M3T2
// Hunter Cunningham
// 10/11/2026

#include <iostream>
#include <random>

// Set up the random engine once and reuse it for every roll.
int rollDie() {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_int_distribution<int> dist(1, 6);
    return dist(gen);
}

int main() {
    char again = 'y';

    while (again == 'y' || again == 'Y') {
        int die1 = rollDie();
        int die2 = rollDie();
        int total = die1 + die2;

        std::cout << "\nCome-out roll: " << die1 << " + " << die2
                  << " = " << total << "\n";

        // Decision tree for the come-out roll
        if (total == 7 || total == 11) {
            std::cout << "Natural! You WIN.\n";
        } else if (total == 2 || total == 3 || total == 12) {
            std::cout << "Craps! You LOSE.\n";
        } else {
            // 4, 5, 6, 8, 9, 10 -> becomes the "point"
            std::cout << total << " is now the point. ";
        }

        std::cout << "Roll again? (y/n): ";
        std::cin >> again;
    }

    std::cout << "Thanks for playing!\n";
    return 0;
}