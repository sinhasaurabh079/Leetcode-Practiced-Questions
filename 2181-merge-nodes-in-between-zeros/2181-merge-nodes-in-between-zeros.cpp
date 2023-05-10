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
 ListNode* mergeNodes(ListNode* head) {
      // iterative version
        head = head->next;
        ListNode* start = head;
        
        while(start != NULL){
            ListNode* end = start;
            int sum = 0;
            while(end->val != 0){
               sum += end->val;
               end = end->next;
            }
            start->val = sum;
            start->next = end->next;
            start = start->next;
        }
        return head;
    }
};
/*
//  creating new linkedlist 
  
        ListNode* temp = new ListNode(0);
        ListNode* newHead = temp;
        int sum = 0;
        head = head->next;
        while(head != NULL){
            if(head->val != 0){
               sum += head->val;
            }
            else{
              // link and move the pointer
               temp->next = new ListNode(sum);
               temp = temp->next;
               sum = 0;
            }
            head = head->next;
        }
   // by recursion
         if(!head->next)
         return NULL;
      
      // getting sum between cur 0 to next 0
      ListNode* ptr = head->next;
      int sum=0;
      while(ptr->val!=0){
         sum += ptr->val;
         ptr = ptr->next;
      } 
      // assign sum on the first node between nodes having value 0.  
      head->next->val = sum;
      // call and get the answer and connect the answer to next of head->next
      head->next->next = mergeNodes(ptr);
      //return head->next..=> new head
      return head->next;
  
*/