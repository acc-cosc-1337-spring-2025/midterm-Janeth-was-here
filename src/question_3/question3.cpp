#include "question3.h"

bool test_config()
{
    return true;
}


// The function will return the greatest common denominator for the
// two int parameters. If there are no common factors, the function returns -1. 
int find_gcd(int num1, int num2) 
{
    while (num2 != 0) 
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    return (num1 == 1) ? -1 : num1;
}