//https://leetcode.com/problems/binary-tree-inorder-traversal/
// Iterative Solution
class Solution {
public:
    vector<int> ans;
    vector<int> inorderTraversal(TreeNode* root) {
        if (!root) return ans;
        stack<TreeNode*> st;
        st.push(root);

        while(!st.empty()) {
            TreeNode temp = *st.top();
            cout << temp.val << endl;
            if (temp.left == nullptr) {
                st.pop();
                ans.push_back(temp.val);
                if (temp.right != nullptr) st.push(temp.right);
            } else {
                st.top()->left = nullptr;
                st.push(temp.left);
            }
        }
        
        return ans;
    }
};

//Recursive
class Solution {
public:
    vector<int> ans;
    void helper(TreeNode *root) {
        if (root == nullptr) {
            return;
        }
        helper(root->left);
        ans.push_back(root->val);
        helper(root->right);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        helper(root);
        return ans;
    }
};
