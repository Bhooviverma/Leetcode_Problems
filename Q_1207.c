bool uniqueOccurrences(int* arr, int arrSize) {
    int freq[arrSize];
    int k = 0;
    for (int i=0; i<arrSize; i++) {
        int seen=0;
        for (int j=0; j<i; j++) {
            if (arr[j]==arr[i]) {
                seen=1;
                break;
            }
        }
        if (seen)
            continue;
        int count=0;
        for (int k=0; k<arrSize; k++) {
            if (arr[i]==arr[k])
                count++;
        }
        for (int m=0; m<k; m++) {
            if (freq[m]==count)
                return false;
        }
        freq[k]=count;
        k++;
    }

    return true;
}
