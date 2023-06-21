    #include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    return (num1 > num2) - (num1 < num2);
}

int* sortedSquares(int* nums, int length, int* returnSize) {
    int* arr = (int*)malloc(length * sizeof(int));
    for (int i = 0; i < length; i++) {
        arr[i] = nums[i] * nums[i];
    }
    qsort(arr, length, sizeof(int), compare);
    *returnSize = length;
    return arr;
}

int main() {
    int nums[] = {-4, -1, 0, 3, 10};
    int length = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    int* result = sortedSquares(nums, length, &returnSize);
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    free(result);
    return 0;
}
