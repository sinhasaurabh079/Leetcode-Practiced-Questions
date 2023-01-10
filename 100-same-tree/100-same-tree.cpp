/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
      stack<pair<TreeNode*,TreeNode*>> st;
      st.push({p,q});

      while(!st.empty())
      {
          auto [node1,node2] = st.top();
          st.pop();
          // if they are null together
          if(!node1 && !node2)  
             continue;
          if(node1==NULL || node2==NULL)   // if(!node1 || !node2)
             return false;
          if(node1->val != node2->val)
             return false;

          st.push({node1->left,node2->left});
          st.push({node1->right,node2->right}); 

          // pehle stack  left part jayega uske baad right part
          // top pr pehle right part hoga and isliye wo pehle compare hoga
          // uske baad left wala compare hoga       
      }
    return true;  
    }
};

/*

// using recursion

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

       // agr dono saath m null reach krte h mtlb toh same tree h
       // and it is base condition
        if(p==NULL && q==NULL)
            return true;

       // agr koi pehle khtm hota h tb dono tree different h      
        if(p==NULL || q==NULL)
            return false;

       // kisi bhi point pr left & right subtree nodes of p & q are not equal then they are not same tree 
        if(p->val != q->val) 
            return false;

       // traverse each node of left and right of p and q
        return isSameTree(p->right,q->right) && isSameTree(p->left,q->left);               
    }
};
*/