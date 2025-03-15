
#include<iostream>
using namespace std;
#include "question1.h"

// Function to check if input is a valid 8-bit binary number
bool is_valid_binary(const std::string& binary) 
{
    if (binary.length() != 8) return false; // Must be exactly 8 characters long
    
    // Check each character to ensure it's either '0' or '1'
    for (int i = 0; i < 8; i++) 
    {
        if (binary[i] != '0' && binary[i] != '1') 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    std::string binary;
    
    while (true) 
    {
        cout << "Enter an 8-bit binary number (or any other character to exit): ";
        cin >> binary;
        
        // If input is not a valid binary number, exit the loop
        if (!is_valid_binary(binary)) 
        {
            cout << "Invalid input or chosen to exit... Exiting program.\n";
            break;
        }
        int decimal;
        decimal = binary_to_decimal(binary);
        cout << "The decimal equivalent is: " << decimal << endl;
    }
    
    return 0;
}