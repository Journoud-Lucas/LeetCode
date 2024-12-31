/*
Author: JOURNOUD Lucas
Date: 2024-12-31
Website: LeetCode
Problems: 20 - Valid Parentheses
*/

#include <iostream>
#include <unordered_map>

bool isValid(std::string s);

int main()
{
	std::cout << isValid("()") << std::endl;
	std::cout << isValid("()[]{}") << std::endl;
	std::cout << isValid("(]") << std::endl;
	std::cout << isValid("([])") << std::endl;
	std::cout << isValid("]") << std::endl;
	std::cout << isValid("[") << std::endl;

    return 0;
}

bool isValid(std::string s)
{
	std::unordered_map<char, bool> symbole = { {'(', true}, {')', false}, {'[', true}, {']', false}, {'{', true},{'}', false}};
	std::unordered_map<char, char> association = { {')', '('}, {']', '['}, {'}', '{'} };

	std::string stack;


	for (int i = 0; i < s.length(); i++)
	{
		if (symbole[s[i]])
		{
			stack += s[i];
		}
		else if (!stack.empty())
		{
			if (stack.back() == association[s[i]])
			{
				stack.pop_back();
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	return stack.empty();
}