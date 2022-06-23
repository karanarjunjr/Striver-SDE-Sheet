class Solution {
public:
    vector<int> ans;
    void helper(TreeNode* root) {
        if (!root) return;
        helper(root->left);
        helper(root->right);
        ans.push_back(root->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        helper(root);
        return ans;
    }
};
