// Problem can be found here https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3347/
// Solution by: Dustin Kaban
// Date: June 2nd, 2020

class Solution 
{
public:
    TreeNode* invertTree(TreeNode* root) 
    {
        if(root == NULL)
        {
            return NULL; 
        }
        
        TreeNode* right = invertTree(root->right);
        TreeNode* left = invertTree(root->left);
        root->left = right;
        root->right = left;
        return root;
    }
};
