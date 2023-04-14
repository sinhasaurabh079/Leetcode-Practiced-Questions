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
    ListNode* middleNode(ListNode* head) {
      // method 1 
      // //  iss question m middle node ko return krna h
      // // nodes ko array m dalo and bich wale size/2 pr hoga
      // // usko return krdo
      //   vector<ListNode*> vecnodes{head};
      //   while(vecnodes.back()->next != NULL){
      //     vecnodes.push_back(vecnodes.back()->next);
      //   }
      //   return vecnodes[vecnodes.size()/2];

      // // method 2
      // // count length and return middle
      // // len/2 distance pr middle node hoga in case of odd or even no of nodes
      // // since len starts from 0
      // // for even len/2 is at second middle and in odd len/2 is at middle
      //    int len=0;
      //    // gives length
      //    for(auto iter = head; iter!=NULL; iter = iter->next, len++);

      //    for(int i=0;i<len/2;i++)
      //        head = head->next;
      //    return head;    

      // method 3
      // slow and fast pointer
      // slow moves by 1 and fast moves by 2
      // when fast or fast->next is NULL, then slow is at mid
      // as slow moves by half speed
      ListNode *slow = head, *fast=head;
      while(fast && fast->next){
        slow = slow->next;           // slow moves 1 node/itern
        fast = fast->next->next;     // fast moves 2 node/itern
      }
      return slow;
    }
};