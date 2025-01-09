/*
Author: JOURNOUD Lucas
Date: 2025-01-09
Website: LeetCode
Problems: 8 - String to Integer (atoi)
*/

#include <iostream>
#include <math.h>

int myAtoi(std::string s);


int main()
{
    std::cout << myAtoi("42");
    std::cout << myAtoi("   -042");
    std::cout << myAtoi("1337c0d3");
    std::cout << myAtoi("0-1");
    std::cout << myAtoi("words and 987");
    std::cout << myAtoi("2147483646");

    return 0;
}

int myAtoi(std::string s)
{
    int totalNumber = 0;
    bool negatif = false;
    bool meetNumber = false;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] == '-' || s[i] == '+') && !meetNumber)
        {
            if (s[i] == '-')
            {
                negatif = true;
            }
            meetNumber = true;
        }
        else if (s[i] >= 48 && s[i] <= 57)
        {
            meetNumber = true;
            if (totalNumber > INT_MAX / 10 || (totalNumber == INT_MAX / 10 && s[i] > '7'))
            {
                return negatif ? INT_MIN : INT_MAX;
            }
            totalNumber = totalNumber * 10 + (s[i] - '0');
        }
        else if (meetNumber || (!meetNumber && s[i] != ' ' && s[i] != '-' && s[i] != '+'))
        {
            break;
        }
    }

    return negatif ? -totalNumber : totalNumber;
}