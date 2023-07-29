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
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
          return head;
        }
        // first node is odd, and next is even atq
        ListNode* oddHead = head;
        ListNode* evenHead = head->next;
        ListNode* currOdd = oddHead;
        ListNode* currEven = evenHead;

        // even len k case m currEven = null hoga akhri m
        // odd len k case m currEven last node pr hoga and to 
        // terminate loop, suitable condition is currEven->next which is null
        while(currEven != NULL && currEven->next != NULL){
          // odd to odd indices mapping
          currOdd->next = currEven->next;
          currOdd = currOdd->next;
          // even to even indices mapping
          currEven->next = currOdd->next;
          currEven = currOdd->next;
        }
        currOdd->next = evenHead;
      return oddHead;
    }
};