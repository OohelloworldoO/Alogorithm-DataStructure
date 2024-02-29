/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *l3 = new ListNode(0);     // 宣告回傳列節串列
        ListNode *p = l1, *q = l2, *r = l3; // 宣告鏈結串列指標
        int carry = 0, sum = 0;             // 宣告加總以及進位暫存

        while (p != NULL && q != NULL) // 若兩鏈結串列皆有值
        {
            sum = p->val + q->val + carry;    // 算出兩個位數以及進位之總和
            carry = sum / 10;                 // 算出進位數
            r->next = new ListNode(sum % 10); // 創立該位數之節點
            p = p->next;                      // 移動指標
            q = q->next;
            r = r->next;
        }

        while (p != NULL || q != NULL || carry != 0) // 若還有一個鏈結串列有值以及還有進位
        {
            sum = carry;
            if (p != NULL) // 若l1不是空的
            {
                sum += p->val;
                p = p->next;
            }
            if (q != NULL) // 若l2不是空的
            {
                sum += q->val;
                q = q->next;
            }
            carry = sum / 10;                 // 計算進位
            r->next = new ListNode(sum % 10); // 創立節點
            r = r->next;
        }

        return l3->next;
    }
};