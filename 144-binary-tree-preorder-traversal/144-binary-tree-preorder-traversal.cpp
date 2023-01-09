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
// using recursion
// in this wee are calling both the left and right child nodes of the current node.
class Solution {
private:
   void helper(TreeNode* root,vector<int>& nodes)
   {
       if(root==NULL)
         return;
       ans.push_back(root->val);
       helper(root->left,nodes);
       helper(root->right,nodes); 
   }

public:
    vector<int>ans;   
    vector<int> preorderTraversal(TreeNode* root) { 
        helper(root,ans);
       return ans;  
    }
};

/*

// in this we are calling root node
class Solution {
private:
   void preorder(TreeNode* root)
   {
       if(root==NULL)
         return;
       ans.push_back(root->val);
       preorder(root->left);
       preorder(root->right); 
   }

public:
    vector<int>ans;   
    vector<int> preorderTraversal(TreeNode* root) { 
        preorder(root);
       return ans;  
    }
};

// iterative approach

class Solution {
public:
    vector<int>ans;   
    vector<int> preorderTraversal(TreeNode* root) { 
        
        // stackframe bna rhein h
        stack<TreeNode*> st;

       // if root=null & stack khali ho jaye tb poora tree traverse ho gya
        while(root != NULL || !st.empty()){
            
            // Preorder : rLR
            // pehle root ko aray  dal rhein and uske right subtree ko stack m
            // fir root ko left subtree pr point kra rhein h
            if(root != NULL){
                ans.push_back(root->val);

                if(root->right != NULL){
                    st.push(root->right);
                }

                root = root->left;
            }
            // if root->right=NULL ho tb hmein right subtree ko array m add krna h
            else{
                    root = st.top();
                    st.pop();
                }
        }
       return ans;  
    }
};
*/