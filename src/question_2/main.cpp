
#include<iostream>
#include"question2.h"
using namespace std;

int main() 
{
    int number;
    char choice;

    do 
    {
        // Prompt user for a number
        cout << "Enter a number (1-10): ";
        cin >> number;

        // Validate that the number is in the range of 1 to 10
        while (number < 1 || number > 10) 
        {
            cout << "Invalid input." << endl << "Please enter a number between 1 and 10: ";
            cin >> number;
        }

        // Pass the number to the get_factorial_sequence function, save the return value to a variable in main.
        std::string result = get_factorial_sequence(number);

        // Display the factorial sequence
        cout << "Factorial Sequence: " << result << endl;

        // Ask if user wants to continue
        cout << "Do you want to enter another number? (y/n): ";
        cin >> choice;

    } 
    // The program will loop until user wants to exit.
    while (choice == 'y' || choice == 'Y'); //while enter another number is y it will continue

    cout << "End of program, Goodbye!" << endl;
    return 0;
}