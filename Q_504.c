char* convertToBase7(int num) {
    char *ans = (char *)malloc(20 * sizeof(char));
    
    if (num == 0) {
        ans[0] = '0';
        ans[1] = '\0';
        return ans;
    }

    int negative = 0;

    if (num < 0) {
        negative = 1;
        num = -num;
    }

    int i = 0;

    while (num > 0) {
        ans[i++] = (num % 7) + '0';
        num = num / 7;
    }

    if (negative) {
        ans[i++] = '-';
    }

    ans[i] = '\0';

    // Reverse the string
    int left = 0;
    int right = i - 1;

    while (left < right) {
        char temp = ans[left];
        ans[left] = ans[right];
        ans[right] = temp;

        left++;
        right--;
    }

    return ans;
}
