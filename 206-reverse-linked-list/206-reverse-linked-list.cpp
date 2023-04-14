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
    ListNode* reverseList(ListNode* head) {
      // ListNode* p = head;
      //  vector<int> arr;
      //  while(p){
      //     arr.push_back(p->val);
      //     // arr[i++]=p->val;  didnt work
      //     p=p->next;
      //  }     
      //  p=head;
      //  int i = arr.size()-1;
      //  while(p && i>=0){
      //    p->val = arr[i--];
      //    p=p->next;
      //  }
      // return head;
      // --------------------------------------
      // ListNode* curr=head;
      // ListNode* prev=NULL;
      // ListNode* temp=NULL;
      // while(curr != NULL){
      //   temp = prev;
      //   prev = curr;
      //   curr = curr->next;
      //   prev->next = temp;
      // }
      // head = prev;
      // return prev;
      // ---------------------------------

      // to store the next node we use fwd to access other nodes
      // pehla fwd node pr jao
      // curr node ko uske prev se link karo
      // ek node link ho gya abb aage
      // prev ko abb curr node pr point karao and curr ko fwd node p
      ListNode* curr = head;
      ListNode* prev = NULL;
      while(curr!=NULL){
        ListNode* fwd = curr->next; 
        curr->next = prev;
        prev = curr;
        curr = fwd;
      }
      // as prev is pointing last node and it become first node
      return prev;
    }
};