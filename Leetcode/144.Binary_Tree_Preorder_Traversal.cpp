class Solution {
public:
    vector<int> ans;
    
    void preorder(TreeNode* node){
        if(!node) return;
        ans.push_back(node->val);
        preorder(node->left);
        preorder(node->right);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return ans;
    }
};