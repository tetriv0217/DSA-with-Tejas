#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *t1 = l1;
        ListNode *t2 = l2;
        int carry = 0;
        ListNode *dummy = new ListNode(-1);
        ListNode *temp = dummy;
        while (t1 != nullptr && t2 != nullptr)
        {
            int sum = t1->val + t2->val + carry;
            ListNode *newNode = new ListNode(sum % 10);
            if (sum >= 10)
            {
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            temp->next = newNode;
            temp = temp->next;
            t1 = t1->next;
            t2 = t2->next;
        }
        while (t1)
        {
            if (carry == 1)
            {
                ListNode *newNode = new ListNode(0);
                if (t1->val == 9)
                {
                }
                else
                {
                    newNode->val = t1->val + 1;
                    carry = 0;
                }
                temp->next = newNode;
                temp = temp->next;
            }
            else
            {
                carry = 0;
                ListNode *newNode = new ListNode(t1->val);
                temp->next = newNode;
                temp = temp->next;
            }
            t1 = t1->next;
        }
        while (t2)
        {
            if (carry == 1)
            {
                ListNode *newNode = new ListNode(0);
                if (t2->val == 9)
                {
                }
                else
                {
                    newNode->val = t2->val + 1;
                    carry = 0;
                }
                temp->next = newNode;
                temp = temp->next;
            }
            else
            {
                carry = 0;
                ListNode *newNode = new ListNode(t2->val);
                temp->next = newNode;
                temp = temp->next;
            }
            t2 = t2->next;
        }
        if (carry == 1)
        {
            ListNode *newNode = new ListNode(1);
            temp->next = newNode;
        }
        return dummy->next;
    }
};
int main()
{

    return 0;
}