 // CSC 134
 // M1Lab1 - The Apple Orchard
 // Hunter Cunningham
 // 9/21/2026
 // We're going to make the simplest possible
 // "checkout" machine.

 #include <iostream>
 #include <iomanip> //for the 2 decimal places
 using namespace std;

 int main() {

 // Variables are like mailboxes
 string first_name, last_name, full_name; // holds customer name
 string product = "apples"; // holds product
 int amount_purchased;
 double cost_each = 0.99;
 double total_cost;

    cout << "Welcome to the " << product << " store!" << endl;
    cout << "What's your first name? ";
    cin >> first_name;
    cout << "What's your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;

    // Ask how much they'd like to buy.
    cout << "How many " << product << " would you like today? ";
    cin >> amount_purchased;

    // Find out the total price
    total_cost = amount_purchased * cost_each;

    // Formatting for change
    cout << setprecision(2) << fixed;

    // result
    cout << "For " << amount_purchased << " " << product << endl;
    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you for shopping with us!" << endl;


    return 0; // no errors
 }
