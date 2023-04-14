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
    int getDecimalValue(ListNode* head) {
       ListNode* p=head;
       int sum = 0;
       /*
       Loop	Character	Operation	   Result
      ‘1’	        (0*1) + 1	          1
 	    ‘0’	        (1x2) + 0	          2
 	    ‘1’	        (2*2) + 1	          5
    Note: Operation is always the previous multiplied by the counting system. In this this, we're doing decimal so x10. 
If we were doing hex, it'll x16.
 Binary will be x 2.
       */
       while(p!=NULL){
         sum = sum*2 + p->val;
         p = p->next;
       }  
       return sum;
    }
};

/*
class Solution {
public:
    int getDecimalValue(ListNode* head) {
       string s="";
       ListNode* p=head;
       while(p!=NULL){
         s += to_string(p->val);
         p = p->next;
       } 
       int ans=0;
       int power = 1;
       int len = s.length()-1;
       // from lsb to msb
       for(int i = len; i>=0; i--){
          ans += (s[i]-'0')*power;
          power *= 2;
       }
      // from msb to lsb
      // for(int i=0;i<s.length() && len >=0;i++){ 
      //    ans += (s[i]-'0') * pow(2,len);
      //    len--;
      // }
       return ans;
    }
};
*/