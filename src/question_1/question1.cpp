#include "question1.h"
#include <cmath>

bool test_config()
{
    return true;
}

// The function will convert an 8 character length string
// from binary to decimal and returns the decimal.
int binary_to_decimal(const std::string& binary) {
    int decimal = 0;
    int power = 1; // Represents 2^0 initially
    
    // Traverse the string from right to left
    for (int i = 7; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += power; // Add corresponding power of 2 if bit is '1'
        }
        power *= 2; // Update power of 2
    }
    
    return decimal;
}