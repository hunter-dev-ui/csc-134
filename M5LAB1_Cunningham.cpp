#include <iostream>
#include <limits>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Hunter Cunningham
11/08/2026
*/

// Function Prototypes
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_climb_window();   // new branch 1
void choice_cellar_hatch();   // new branch 2
void clear_bad_input();       // helper: clears bad input from cin

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  main_menu();
  cout << "Thanks for playing!" << endl;
  return 0;
}

void main_menu() {
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return;
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    clear_bad_input();
    main_menu();
  }
}

// FUNCTION DEFINITIONS
void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    clear_bad_input();
    choice_front_door();
  }
}

void choice_back_door() {
  cout << "You creep around the back of the house." << endl;
  cout << "A window is cracked open, and there's a cellar hatch in the grass."
       << endl;
  cout << "Do you:" << endl;
  cout << "1. Climb through the window" << endl;
  cout << "2. Open the cellar hatch" << endl;
  cout << "3. This is too creepy, go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_climb_window();
  } else if (2 == choice) {
    choice_cellar_hatch();
  } else if (3 == choice) {
    choice_go_home();
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    clear_bad_input();
    choice_back_door();
  }
}

void choice_go_home() {
  cout << "You decide the house isn't worth it and head home." << endl;
  cout << "You make some cocoa and watch TV. Safe, but boring." << endl;
  cout << "THE END" << endl;
}

// any new choices go here
void choice_climb_window() {
  cout << "You squeeze through the window and land in a dusty library."
       << endl;
  cout << "A glowing book sits open on a table." << endl;
  cout << "Do you:" << endl;
  cout << "1. Read the book" << endl;
  cout << "2. Leave it alone and sneak back out" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    cout << "The book reveals the house's secret: it's a friendly ghost's "
            "home, and he's been lonely for 100 years."
         << endl;
    cout << "He makes you tea. You become best friends." << endl;
    cout << "THE END (good ending)" << endl;
  } else if (2 == choice) {
    cout << "You tiptoe out the window and go home, wondering what the "
            "book said."
         << endl;
    cout << "THE END" << endl;
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    clear_bad_input();
    choice_climb_window();
  }
}

void choice_cellar_hatch() {
  cout << "You lift the hatch and descend into a dark cellar." << endl;
  cout << "Something is scratching behind a wooden door." << endl;
  cout << "Do you:" << endl;
  cout << "1. Open the door" << endl;
  cout << "2. Run back up the stairs" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    cout << "It's a very fluffy cat guarding a chest of old coins!" << endl;
    cout << "You pocket a coin and adopt the cat." << endl;
    cout << "THE END (good ending)" << endl;
  } else if (2 == choice) {
    cout << "You bolt up the stairs and don't stop running until you're "
            "home."
         << endl;
    cout << "THE END" << endl;
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    clear_bad_input();
    choice_cellar_hatch();
  }
}

// Clears an error state (like typing letters) and throws away the rest
// of the line, so the program doesn't loop forever on bad input.
void clear_bad_input() {
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}