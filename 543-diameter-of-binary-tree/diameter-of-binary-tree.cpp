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

pair<int,int> diameterTree(TreeNode * root){

    if(root==NULL) return {0,0};

    pair<int,int>left = diameterTree(root->left);
    pair<int,int>right = diameterTree(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second ;

    int currHeight = max(left.second , right.second) + 1;

    int ans = max(op1 , max(op2 , op3));

    return {ans,currHeight};
}

    int diameterOfBinaryTree(TreeNode* root) {
        
        return diameterTree(root).first;
    }
};