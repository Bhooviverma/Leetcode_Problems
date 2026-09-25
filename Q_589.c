/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void traverse(struct Node* root, int* ans, int* index) {
    if (root == NULL)
        return;

    ans[(*index)++] = root->val;

    for (int i = 0; i < root->numChildren; i++) {
        traverse(root->children[i], ans, index);
    }
}

int* preorder(struct Node* root, int* returnSize) {
    int* ans = (int*)malloc(10000 * sizeof(int));
    *returnSize = 0;
    traverse(root, ans, returnSize);

    return ans;
}
