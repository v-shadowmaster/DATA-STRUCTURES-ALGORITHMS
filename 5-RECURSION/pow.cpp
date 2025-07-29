/*
Implement Pow(x,n) | X raised to the power N

Problem Statement: Given a double x and integer n, calculate x raised to power n. Basically Implement pow(x, n).

Examples:

Example 1:

Input: x = 2.00000, n = 10

Output: 1024.00000

Explanation: You need to calculate 2.00000 raised to 10 which gives ans 1024.00000

Example 2:

Input: x = 2.10000, n = 3

Output: 9.26100

Explanation: You need to calculate 2.10000 raised to 3 which gives ans 9.26100

*/

#include <iostream>
#include <vector>
#include <string>

int pow(int number, int power)
{
    if (power == 1)
        return number;

    return number * pow(number, power - 1);
}

int main()
{
    int number = 2, power = 10;

    std::cout << pow(number, power) << std::endl;

    return 0;
}