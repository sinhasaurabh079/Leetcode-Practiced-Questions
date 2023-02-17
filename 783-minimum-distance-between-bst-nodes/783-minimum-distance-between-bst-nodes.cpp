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
    // Algo (without array)
    // Two pointer (in this case nodes) method
    // - when prevNode exist calcutating the minDiff during inorder traversal
    // - otherwise not
    //    i.e., minDiff = min(currNode's value - prevNode's value)
    // - returning the minDistance 

     int minDistance = INT_MAX;
     // initially prevValue is NULL
     TreeNode* prevValue;
    void inorderTraversal(TreeNode* root){
        if(root==NULL){
          return;
        }
        inorderTraversal(root->left);
        // Finding the diff when prevValue exist
        if(prevValue != NULL){
          minDistance = min(minDistance, root->val - prevValue->val);
        }
        prevValue = root;
        inorderTraversal(root->right);
    } 
    int minDiffInBST(TreeNode* root) {
      inorderTraversal(root);  
      // minDistance calculated in traversal
      return minDistance;
      
      // tc = O(N)
      // sc = O(H)
    }
};

/*

 // with array
 //  Algo 
 //   - sorted array bna diya inorder travesal from bst
 //   - min diff of two consecutive element of array is the answer
 //
class Solution {
public:
   
     // array to store inorder sorted array of given bst
     vector<int> inOrder;
     int minDistance = INT_MAX;
    void inorderTraversal(TreeNode* root){
        if(root==NULL){
          return;
        }
        inorderTraversal(root->left);
        inOrder.push_back(root->val);
        inorderTraversal(root->right);
    } 
    int minDiffInBST(TreeNode* root) {
      inorderTraversal(root);

      for(int i=1;i<inOrder.size();i++){
          minDistance = min(minDistance, inOrder[i]-inOrder[i-1]);
      }  
      return minDistance;
      // tc = O(N)  - as we traverse N nodes and iterate N times
      // sc = O(N)  - in rec calls, maximum size of stack frame is equals toto height of tree and in worst case it equals to no of nodes (when tree is linear)
    }
};

*/