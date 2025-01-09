/*
Author: JOURNOUD Lucas
Date: 2025-01-02
Website: LeetCode
Problems: 58 - Length of Last Word
*/

#include <iostream>

int lengthOfLastWord(std::string s);

int main()
{
    std::cout << lengthOfLastWord("Hello World") << std::endl;
    std::cout << lengthOfLastWord("   fly me   to   the moon  ") << std::endl;
    std::cout << lengthOfLastWord("luffy is still joyboy") << std::endl;

    return 0;
}

int lengthOfLastWord(std::string s)
{
    int size = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == ' ' && size)
        {
            return size;
        }
        if (s[i] != ' ')
        {
            size++;
        }
    }
    return size;
}