/*
Author: JOURNOUD Lucas
Date: 2024-12-06
Website: LeetCode
Problems: 13 - Roman to Integer
*/

#include <iostream>
#include <unordered_map>

int romanToInt(std::string s);
void romanToIntAndShow(std::string s);

int main()
{
	romanToIntAndShow("III");
    romanToIntAndShow("LVIII");
    romanToIntAndShow("MCMXCIV");

    return 0;
}

int romanToInt(std::string s)
{
    std::unordered_map<char, int> symbole{ {'I', 1}, {'V', 5}, {'X', 10}, {'L',50}, {'C',100},{'D',500},{'M',1000} };
    int somme = symbole[s[s.size() - 1]];
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (symbole[s[i + 1]] > symbole[s[i]])
        {
            somme -= symbole[s[i]];
        }
        else
        {
            somme += symbole[s[i]];
        }
    }
    return somme;
}

void romanToIntAndShow(std::string s)
{
	std::cout << s << " = " << romanToInt(s) << std::endl;
}