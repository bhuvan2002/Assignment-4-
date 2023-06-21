#include <stdio.h>
#include <stdbool.h>

int* findDifference(int nums1[], int nums2[], int p, int q, int* resultLength) {
    int arr1[p], arr2[q]; 
    int arr1Size = 0, arr2Size = 0; 

   
    for (int i = 0; i < p; i++) {
        bool found = false; 

        for (int j = 0; j < q; j++) {
            if (nums1[i] == nums2[j]) {
                found = true;
                break;
            }
        }

        
        if (!found) {
            arr1[arr1Size] = nums1[i];
            arr1Size++;
        }
    }

    
    for (int i = 0; i < q; i++) {
        bool found = false; 

        
        for (int j = 0; j < p; j++) {
            if (nums2[i] == nums1[j]) {
                found = true;
                break;
            }
        }

        
        if (!found) {
            arr2[arr2Size] = nums2[i];
            arr2Size++;
        }
    }

    
    int* result = (int*)malloc((arr1Size + arr2Size) * sizeof(int));
    *resultLength = arr1Size + arr2Size;
    int index = 0;

   
    for (int i = 0; i < arr1Size; i++) {
        bool duplicate = false; 

      
        for (int j = 0; j < index; j++) {
            if (arr1[i] == result[j]) {
                duplicate = true;
                break;
            }
        }

        
        if (!duplicate) {
            result[index] = arr1[i];
            index++;
        }
    }


    for (int i = 0; i < arr2Size; i++) {
        bool duplicate = false; 

       
        for (int j = 0; j < index; j++) {
            if (arr2[i] == result[j]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            result[index] = arr2[i];
            index++;
        }
    }

    return result;
}

int main() {
    int num1[] = {1, 2, 3};
    int p = sizeof(num1) / sizeof(num1[0]);
    int num2[] = {2, 4, 6};
    int q = sizeof(num2) / sizeof(num2[0]);
    int resultLength = 0;
    int* result = findDifference(num1, num2, p, q, &resultLength);

    printf("[");
    for (int i = 0; i < resultLength; i++) {
        printf("%d", result[i]);
        if (i != resultLength - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    free(result);
    return 0;
}
