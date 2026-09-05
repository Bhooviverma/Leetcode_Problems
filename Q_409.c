int longestPalindrome(char* s) {
    int count[128] = {0};
    int ans = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i]]++;
    }

    for (int i = 0; i < 128; i++) {
        ans += (count[i] / 2) * 2;
    }

    if (ans < strlen(s)) {
        ans++;
    }

    return ans;
}
