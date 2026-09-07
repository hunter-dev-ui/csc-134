/*
M1HW1 Movie talk

Talking about the movie Real Steel.

*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string movieName = "Real Steel";
    int releaseYear = 2011;
    double boxOfficeGross = 299300000.0;

    cout << fixed << setprecision(2);
    cout << "The movie name is " << movieName << "." << endl;
    cout << "It came out in " << releaseYear << "." << endl;
    cout << "It made a total of " << boxOfficeGross << " at the box office." << endl;
    
    cout << endl;
    cout << "One of my favorite scenes is when Max is in Atom's corner during the fight," << endl;
    cout << "shouting at Charlie to make the robot fight back." << endl;
    cout << "Charlie keeps holding back, repeating \"Not yet, not yet\" as the crowd waits." << endl;
    cout << "The tension builds until Charlie finally lets Atom fight for real." << endl;
    cout << "It's one of the most emotional moments in the movie." << endl;
    return 0;
}
