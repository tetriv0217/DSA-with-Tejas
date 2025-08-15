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
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }
        ListNode *temp = head;
        int len = 1;
        while (temp->next != nullptr)
        {
            temp = temp->next;
            len++;
        }
        k = k % len; // This will give number of rotations
        if (k == 0)
            return head;
        temp->next = head;
        temp = head;
        int cnt = len - k;
        for (int i = 0; i < cnt - 1; i++)
        {
            temp = temp->next;
        }
        head = temp->next;
        temp->next = nullptr;
        return head;
    }
};
int main()
{

    return 0;
}