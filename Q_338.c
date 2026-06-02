/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    *returnSize = n + 1;

    int* ans = (int*)malloc((n + 1) * sizeof(int));

    for (int i = 0; i <= n; i++) {
        int num = i;
        int count = 0;

        while (num > 0) {
            count += num % 2;
            num /= 2;
        }

        ans[i] = count;
    }

    return ans;
}
