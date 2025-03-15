//
bool test_config()
{
    return true;
}

#include <iostream>
#include <string>

std::string decimal_to_binary(int num) {
    std::string binaryStr;
    // Convert the number to binary
    while (num > 0) 
    {
        char bit = (num % 2) + '0'; // Convert remainder to '0' or '1'
        binaryStr.push_back(bit);   // Append to string
        num /= 2;
    }
    // Reverse the string to get the correct order
    std::string reversedBinary;
    for (int i = binaryStr.size() - 1; i >= 0; --i) 
    {
        reversedBinary.push_back(binaryStr[i]);
    }

    // Ensure at least 8 bits by adding leading zeros if needed
    while (reversedBinary.size() < 8) 
    {
        reversedBinary.insert(reversedBinary.begin(), '0'); // Insert 0 at the beginning
    }

    return reversedBinary;
}