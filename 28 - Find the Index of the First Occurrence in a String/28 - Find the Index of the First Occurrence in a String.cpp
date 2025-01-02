/*
Author: JOURNOUD Lucas
Date: 2025-01-01
Website: LeetCode
Problems: 28 - Find the Index of the First Occurrence in a String
*/

#include <iostream>

int strStr(std::string haystack, std::string needle);

int main()
{
    std::cout << strStr("mississippi", "issip");

    return 0;
}

int strStr(std::string haystack, std::string needle)
{
    for (int i = 0; i < haystack.length(); i++)
    {
        for (int j = 0; j < needle.length() && haystack[i+j] == needle[j]; j++)
        {
            if (j == needle.length()-1)
            {
                return i;
            }
        }
    }
    return -1;
}