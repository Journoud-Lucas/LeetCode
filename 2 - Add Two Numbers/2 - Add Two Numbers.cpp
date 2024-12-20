/*
Author: JOURNOUD Lucas
Date: 2024-12-13
Website: LeetCode
Problems: 2 - Add Two Numbers
Difficulty: Medium
*/

#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
ListNode* createList(const std::vector<int>& values);
void printList(ListNode* head);

int main()
{
    ListNode* l1 = createList({ 9, 9, 9, 9, 9, 9, 9 });
    ListNode* l2 = createList({ 9, 9, 9, 9 });

    printList(addTwoNumbers(l1, l2));
    return 0;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode* result = new ListNode();
    ListNode* first = result;
    int retenue = 0;
    bool added = false;
    while (l1 || l2)
    {
        int temp = 0;
        if (l1)
        {
            temp += l1->val;
            l1 = l1->next;
        }
        if (l2)
        {
            temp += l2->val;
            l2 = l2->next;
        }
        int unit = (temp + retenue) % 10;
        added = true;
        retenue = (temp + retenue) / 10;
        added = false;
        result->val = (unit);
        if (l1 || l2)
        {
            result->next = new ListNode();
            result = result->next;
        }
    }
    if (!added && retenue)
    {
        result->next = new ListNode();
        result = result->next;
        result->val = retenue;
    }
    return first;
}

// As this was not the purpose of the exercise, the 2 functions below (createList and printList) were written by IA and not by me

// Helper function to create a linked list from an array
ListNode* createList(const std::vector<int>& values)
{
    if (values.empty()) return nullptr;
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    for (size_t i = 1; i < values.size(); ++i)
    {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    return head;
}

// Helper function to print a linked list
void printList(ListNode* head)
{
    ListNode* current = head;
    while (current)
    {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;
}