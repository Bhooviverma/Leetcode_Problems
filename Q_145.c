/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void postorder(struct TreeNode* root, int* ans, int* index) {
    if (root == NULL)
        return;

    postorder(root->left, ans, index);
    postorder(root->right, ans, index);
    ans[(*index)++] = root->val;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int *ans = (int*)malloc(100 * sizeof(int));   // Max nodes = 100

    *returnSize = 0;

    postorder(root, ans, returnSize);

    return ans;
}
