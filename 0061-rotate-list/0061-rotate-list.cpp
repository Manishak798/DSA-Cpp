/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
    ListNode* findNthNode(ListNode* temp, int k){
        int count=1;
        while(temp!=NULL){
            if(count == k){
                return temp;
            }
            count++;
            temp = temp->next;
        }
        return temp;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        int len = 1;
        ListNode* tail = head;
        /* find out len and tail of ll */
        while(tail->next != NULL){
            len++;
            tail = tail->next;
        }
        /* if k == size of ll then there will be no rotation*/
        if(k%len == 0){
            return head;
        }
        k=k%len;
        tail->next = head;
        ListNode* newLastNode = findNthNode(head, len-k);
        head = newLastNode->next;
        newLastNode->next = NULL;
        return head;
    }
};