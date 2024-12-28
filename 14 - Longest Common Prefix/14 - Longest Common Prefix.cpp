/*
Author: JOURNOUD Lucas
Date: 2024-12-28
Website: LeetCode
Problems: 14 - Longest Common Prefix
*/

#include <iostream>
#include <vector>

std::string longestCommonPrefix(std::vector<std::string> strs);

int main()
{
	std::cout << longestCommonPrefix({ "dog","racecar","car" }) << std::endl;
	std::cout << longestCommonPrefix({ "flower","flow","flight" }) << std::endl;

	return 0;
}

std::string longestCommonPrefix(std::vector<std::string> strs)
{
	std::string prefix = strs[0];
	for (int i = 1; i < strs.size(); i++)
	{
		while (strs[i].find(prefix) != 0)
		{
			prefix.pop_back();
		}
	}
	return prefix;
}