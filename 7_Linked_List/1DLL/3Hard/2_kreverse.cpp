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
    ListNode *reverse(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }
        ListNode *prev = nullptr;
        ListNode *temp = head;
        ListNode *front = head;
        while (temp != nullptr)
        {
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    ListNode *kNode(ListNode *head, int k)
    {
        ListNode *temp = head;
        k -= 1;
        while (temp != nullptr && k > 0)
        {
            k--;
            temp = temp->next;
        }
        return temp;
    }
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        ListNode *temp = head;
        ListNode *prev = nullptr;
        while (temp != nullptr)
        {
            ListNode *kthNode = kNode(temp, k);
            if (kthNode == nullptr)
            {
                if (prev != nullptr)
                {
                    prev->next = temp;
                }
                break;
            }
            ListNode *nextNode = kthNode->next;
            kthNode->next = nullptr;
            reverse(temp);
            if (temp == head)
            {
                head = kthNode;
            }
            else
            {
                prev->next = kthNode;
            }
            prev = temp;
            temp = nextNode;
        }
        return head;
    }
};
int main()
{

    return 0;
}