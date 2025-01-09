/*
Author: JOURNOUD Lucas
Date: 2025-01-02
Website: LeetCode
Problems: 35 - Search Insert Position
*/

#include <iostream>
#include <vector>

int searchInsert(std::vector<int>& nums, int target);

int main()
{
    std::vector<int> nums = { 1, 3, 5, 6 };
    std::cout << searchInsert(nums, 0);

    return 0;
}

int searchInsert(std::vector<int>& nums, int target)
{
    int start = 0;
    int end = nums.size();

    int mid = 0;
    while (start < end)
    {
        mid = (start + end) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if(nums[mid] > target)
        {
            end = mid;
        }
        else if (end - start == 1)
        {
            return mid + 1;
        } 
        else if(nums[mid] < target)
        {
            start = mid;
        }
    }

    return start;
};