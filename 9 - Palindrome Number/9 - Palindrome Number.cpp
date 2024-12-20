/*
Author: JOURNOUD Lucas
Date: 2024-12-06
Website: LeetCode
Problems: 9 - Palindrome Number
*/

#include <iostream>
#include <string>

bool isPalindrome(int number);
void isPalindromeAndShow(int number);

int main(void)
{
	isPalindromeAndShow(83738);
    isPalindromeAndShow(123454321);

    return 0;
}

bool isPalindrome(int number)
{
    std::string numberString = std::to_string(number);
    int reversedNumber = 0;

    for (int i = 0; i < numberString.size(); i++)
    {
        reversedNumber += (numberString[i] - '0') * pow(10, i);
    }

    return reversedNumber == number;
}

void isPalindromeAndShow(int number)
{
	std::cout << number << (isPalindrome(number) ? " is a palindrome" : " is not a palindrome") << std::endl;
}