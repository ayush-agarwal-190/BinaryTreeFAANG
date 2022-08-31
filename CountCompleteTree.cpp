class Solution {
public:
    int ans = 0;
    int countNodes(TreeNode* root) {
        inOrder(root);
        return ans;
    }
    void inOrder(TreeNode* root) {
        if(root != NULL) {
            countNodes(root->left);
            ans++;
            countNodes(root->right);
        }
    }
};