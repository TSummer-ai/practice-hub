#include <iostream>
#include <vector>
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (headA == nullptr || headB == nullptr)
        {
            return nullptr;
        }
        // 双指针法，先找长度;
        int lenA = 0;
        int lenB = 0;
        ListNode *pa = headA;
        ListNode *pb = headB;
        while (pa)
        {
            lenA++;
            pa = pa->next;
        }
        while (pb)
        {
            lenB++;
            pb = pb->next;
        }
        pa = headA;
        pb = headB;
        if (lenA > lenB)
        {
            int Astart = lenA - lenB;
            for (int i = 0; i < Astart; i++)
            {
                pa = pa->next;
            }
        }
        else
        {
            int Bstart = lenB - lenA;
            for (int i = 0; i < Bstart; i++)
            {
                pb = pb->next;
            }
        }
        while (pa != pb)
        {
            pa = pa->next;
            pb = pb->next;
        }
        return pa;
    }
};