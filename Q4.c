#include <stdio.h>

int arrayPairSum(int nums[], int length) {
    int total = 0;  
    for (int i = 0; i < length; i += 2) {
        total += nums[i];
    }
    return total;
}

int main() {
    int nums[] = {1, 4, 3, 2};
    int length = sizeof(nums) / sizeof(nums[0]);
    printf("The maximum possible sum is %d\n", arrayPairSum(nums, length));
    return 0;
}
