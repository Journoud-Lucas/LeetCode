/*
Author: JOURNOUD Lucas
Date: 2025-01-01
Website: LeetCode
Problems: 27 - Remove Element
*/

#include <iostream>
#include <vector>

int removeElement(std::vector<int>& nums, int val);
void printVector(std::vector<int>& nums);

int main()
{
    std::vector<int> test1 = { 3, 2, 2, 3 };
    std::cout << removeElement(test1, 3) << std::endl; // Expected: 2 and nums: [2,2,_,_]
    printVector(test1);

    std::vector<int> test2 = { 0 ,1, 2, 2, 3, 0, 4 , 2 };
    std::cout << removeElement(test2, 2) << std::endl; // Expected: 5 and nums: [0,1,4,0,3,_,_,_]
    printVector(test2);

    return 0;
}

int removeElement(std::vector<int>& nums, int val)
{
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}

void printVector(std::vector<int>& nums)
{
    for (int num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
}