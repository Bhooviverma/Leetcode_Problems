int findMaxK(int* nums, int numsSize) {
    int max = -1;
    for (int i=0; i<numsSize; i++) {
        for (int j=0; j<numsSize; j++) {
            if (nums[i]>0 && nums[i]==-nums[j]) {
                if (nums[i]>max)
                    max =nums[i];
            }
        }
    }
    return max;
}
