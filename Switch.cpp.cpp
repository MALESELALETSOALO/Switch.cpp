// Switch.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 
#include <cmath>


int main() {


	int marks;

    cout << " Enter your marks: " << endl;
    cin >> marks;

    switch ( marks) {
        case 1: (marks >= 80 );
        cout << " Dist ";
        break;

    
        case 2: (marks >= 60 && < 80);
        cout << " Credit";
        break;

        case 3: (marks >= 50 && < 60);
        cout << " Sub";
        break;

        case 4: (marks >= 40 && < 50);
        cout << " Pass ";
        break;

        case 5: (marks = 30 > &&  < 40);
        cout << " Fail ";
        break;
    }





}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
