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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == NULL){
          return result;
        } 

        queue<TreeNode*> queue;
        queue.push(root);
        bool leftToRight = true;

        while(!queue.empty()){
          // getting the no of ele present on each level
          int sz = queue.size();
          // creating vector for each level
          vector<int> temp(sz);
          for(int i=0;i<sz;i++){
            TreeNode* node = queue.front();
            queue.pop();
            //finding position to fill nodes value
            int index = leftToRight ? i : sz-i-1;
            temp[index] = node->val;
            // if left and right child exist pushing them into queue
            if(node->left)
               queue.push(node->left);
            if(node->right)
               queue.push(node->right);
          }
          // after one level direction should be reversed
          // from leftToRight to rightToLeft 
          leftToRight = !leftToRight;
          // add the current level element
          result.push_back(temp);     
        }
      return result;  
    }
};
/* Approach
  -> queue m binary tree ko dalengey pehle in preorder traversal way
     (kuki root node ko insertkr rhe h pehle then left and right child ko push kr rhe h)
  -> zig zag fashion ka mtlb h har level pr direction of reading change hogi
     pehle direction to read Left2Right then next level pr Right2Left hona chahiye 
     uske liye hum leftToRight Flag le rhe h
  -> har level pr jitne elements utna ka array bnayengey and push krdengey last m 2d array m
  -> 2d vector mil jayega akhri m
*/  