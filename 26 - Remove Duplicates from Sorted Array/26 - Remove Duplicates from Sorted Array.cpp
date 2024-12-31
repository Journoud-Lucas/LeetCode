/*
Author: JOURNOUD Lucas
Date: 2024-12-31
Website: LeetCode
Problems: 20 - Valid Parentheses
*/

#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int>& nums);

int main()
{
    std::vector<int> test1 = {0,0,1,1,1,2,2,3,3,4};
    std::cout << removeDuplicates(test1);
    
    return 0;
}

int removeDuplicates(std::vector<int>& nums)
{
    int index = 1;

    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[j] != nums[index - 1])
        {
            nums[index] = nums[j];
            index++;
        }
    }
    return index;
};