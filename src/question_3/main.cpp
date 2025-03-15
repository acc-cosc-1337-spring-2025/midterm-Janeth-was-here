#include<iostream>
#include"question3.h"
using namespace std;

// Prompt the user for two int values, 
// call the get_gcd function,
// save the result to a local variable, and output the result. 
// Validate that the numbers is in the range of 1 to 200
// The program continues until the user chooses to exit.
int main()
{
    int num1, num2;
    char choice;
    do
    {
    // Prompt the user for two int values,
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    // call the get_gcd function, save the result to a local variable, 
    int result = find_gcd(num1,num2);
    
    // Validate that the numbers is in the range of 1 to 200
    if ((num1 < 1 || num1 > 200) || (num2 < 1 || num2 > 200 ) ) 
    {
        cout << "Return is out of range! Try again." << endl;
    }
    else
    { 
    // and output the result. 
    cout << "Greatest common denominator is: " << result << endl;
    // Validate that the numbers is in the range of 1 to 200
    }
    // Ask if user wants to continue
    cout << "Do you want to enter another number? (y/n): ";
    cin >> choice;
    }
    // The program will loop until user wants to exit.
    while (choice == 'y' || choice == 'Y'); //while enter another number is y it will continue
    cout << "End of program, Goodbye!" << endl;

return 0;
}