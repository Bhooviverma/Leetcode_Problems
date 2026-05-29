char* reverseVowels(char* s){

    int isVowel(char c){
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
           c=='A' || c=='E' || c=='I' || c=='O' || c=='U';
    }
    
    int i = 0;
    int j = strlen(s) - 1;

    while(i < j){
        while(i < j && !isVowel(s[i])){
            i++;
        }

        while(i < j && !isVowel(s[j])){
            j--;
        }

        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }

    return s;
}
