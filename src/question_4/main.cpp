#include<iostream>
#include"question4.h"
using namespace std;

int main()
{
    int number;
    char choice;

    do 
    {
        // Prompt user for a number
        cout << "Enter a number (1-255): ";
        cin >> number;

        // Validate that the number is in the range of 1 to 255
        while (number < 1 || number > 255) 
        {
            cout << "Invalid input." << endl << "Please enter a number between 1 and 255: ";
            cin >> number;
        }

        // Pass the number to the decimal_to_binary function, save the return value to a variable in main.
        std::string result = decimal_to_binary(number);

        // Display the binary sequence
        cout << "Binary sequence: " << result << endl;

        // Ask if user wants to continue
        cout << "Do you want to enter another sequence? (y/n): ";
        cin >> choice;

    } 
    // The program will loop until user wants to exit.
    while (choice == 'y' || choice == 'Y'); //while enter another number is y it will continue

    cout << "End of program, Goodbye!" << endl;
    return 0;
}