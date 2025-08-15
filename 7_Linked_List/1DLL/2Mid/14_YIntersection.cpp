#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2)
    {
        if (head1 == nullptr || head2 == nullptr)
            return nullptr;
        ListNode *t1 = head1;
        ListNode *t2 = head2;
        while (t1 != t2)
        {
            t1 = t1->next;
            t2 = t2->next;
            if (t1 == t2)
            {
                return t1;
            }
            if (t1 == nullptr)
            {
                t1 = head2;
            }
            if (t2 == nullptr)
            {
                t2 = head1;
            }
        }
        return t1;
    }
};
int main()
{

    return 0;
}