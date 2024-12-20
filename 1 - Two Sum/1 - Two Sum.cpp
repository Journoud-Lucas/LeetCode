/*
Author: JOURNOUD Lucas
Date: 2024-11-25
Website: LeetCode
Problems: 1 - Two Sum
Difficulty: Easy
*/

#include <iostream>
#include <vector>
#include <map>

std::vector<int> twoSum(std::vector<int>& nums, int target);
void printVector(const std::vector<int>& vec);

int main()
{
    std::vector<int> test1 = { 2, 7, 11, 15 };
    printVector(twoSum(test1, 9));

    std::vector<int> test2 = { 3, 2, 4 };
    printVector(twoSum(test2, 6));

    std::vector<int> test3 = { 3, 3};
    printVector(twoSum(test3, 6));

    return 0;
}

std::vector<int> twoSum(std::vector<int>& nums, int target)
{
    std::map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        int temp;
        temp = target - nums[i];
        if (mp.contains(temp))
        {
            return { mp[temp],i };
        }
        else
        {
            mp[nums[i]] = i;
        }
    }
    return {};
}

void printVector(const std::vector<int>& vec)
{
	for (int i : vec)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
}