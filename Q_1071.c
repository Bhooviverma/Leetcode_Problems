int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

char* gcdOfStrings(char* str1, char* str2) {
    int n1 = strlen(str1);
    int n2 = strlen(str2);

    for (int i = 0; i < n1 + n2; i++) {
        if (str1[i % n1] != str2[i % n2]) {
            char* ans = malloc(1);
            ans[0] = '\0';
            return ans;
        }
    }

    int len = gcd(n1, n2);

    char* ans = malloc((len + 1) * sizeof(char));

    for (int i = 0; i < len; i++) {
        ans[i] = str1[i];
    }

    ans[len] = '\0';

    return ans;
}
