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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       // preprocess krke pehle head m kya hoga pta krlo
       // phir curr ptr m head dalodo for further linking
       // l1 and l2 bas apne list m move krte h 
       // jbki curr pointer l1 & l2 ko link krta h
       if(list1==NULL)  return list2;
       if(list2==NULL)  return list1;
       ListNode* head;
       if(list1->val < list2->val){
          head = list1;
          list1 = list1->next;
       }
       else{
          head = list2;
          list2 = list2->next;
       }
      
      ListNode* curr = head;

        while(list1 != NULL && list2 != NULL){
           if(list1->val < list2->val){
              curr->next = list1;
              list1  = list1->next;
              curr = curr->next;
           }
           else{
              curr->next = list2;
              list2 = list2->next;
              curr = curr->next;
           }
        }
        if(list1!=NULL)
           curr->next = list1;
        else
           curr->next = list2;  
        // as actual required list head k baad h and to avoid dummy node
        return head;    
    }
};

/*
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // using dummy node and creating third list
        // jo pehle khtm hoga uske dusra wala list sorted h pehle se
        // bas usko jod denge iss list by curr->next = lambi list
        ListNode* head = new ListNode(0);
        ListNode* curr = head;    // helps in joinig new list

        while(list1 != NULL && list2 != NULL){
           if(list1->val < list2->val){
              curr->next = list1;
              list1  = list1->next;
              curr = curr->next;
           }
           else{
              curr->next = list2;
              list2 = list2->next;
              curr = curr->next;
           }
        }
        if(list1!=NULL)
           curr->next = list1;
        else
           curr->next = list2;  
        // as actual required list head k baad h and to avoid dummy node
        return head->next;    
    }
};
// recursive approach
// dono m jo chota h uske aage konsa link lgana h wo pta kro 
// with the help of merge() 
// last m jo khtm hoga uske ulta return krdo
class Solution {
public:
    ListNode* merge(ListNode* l1, ListNode* l2){
      if(l1==NULL)  return l2;
      if(l2==NULL)  return l1;
      if(l1->val < l2->val){
         l1->next = merge(l1->next, l2);
         return l1;
      }
      else{
         l2->next = merge(l1,l2->next);
         return l2;
      }
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        return merge(list1,list2);
    }
};
*/