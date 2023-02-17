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
    // iterative approach, there is alo morris traversal check out
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int> arr;
       stack<TreeNode*> st;
       while(root || !st.empty()){
           while(root){
               st.push(root);
               root = root->left;
           }
           root = st.top();
           st.pop();
           arr.push_back(root->val);
           root = root->right;
       } 
       return arr; 
        
       // tc = O(n)
       // sc = O(n) 
    }
};


// recursive approach

class Solution {
public:
    vector<int> array;
    void inOrder(TreeNode* root){
      if(root == NULL){
        return;
      }
      inOrder(root->left);
      array.push_back(root->val);
      inOrder(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        // inorder traversal calling up
        inOrder(root);
        return array;
        
        // tc = O(n)
        // sc = O(n)
    }
};
