// https://leetcode.com/problems/binary-tree-preorder-traversal/
// Iterative Solution
class Solution {
public:
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        if (!root) return ans;
        
        st.push(root);
        while (!st.empty()) {
            TreeNode temp = *st.top();
            ans.push_back(temp.val);
            st.pop();
            if (temp.right) st.push(temp.right);
            if (temp.left) st.push(temp.left);
        }
        
        return ans;
    }
};

// Recursive Solution
class Solution {
public:
    vector<int> ans;
    void helper(TreeNode* root) {
        if (!root) return;
        ans.push_back(root->val);
        helper(root->left);
        helper(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        helper(root);
        return ans;
    }
};
