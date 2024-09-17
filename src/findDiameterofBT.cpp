class Solution {
public:
    int getHeight(TreeNode* root) {
        if(root == NULL ) {
            return 0;
        }
        int left = getHeight(root->left);
        int right = getHeight(root->right);
        int maxHeight = max(left, right);
        int totalHeight = maxHeight + 1;
        return totalHeight;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) {
            return 0;
        }
        int option1 = diameterOfBinaryTree(root->left);
        int option2 = diameterOfBinaryTree(root->right);
        int option3 = getHeight(root->left) + getHeight(root->right);
        int maxDiameter = max(option1, max(option2, option3));
        return maxDiameter;
    }
};