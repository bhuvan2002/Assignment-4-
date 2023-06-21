#include <stdio.h>

void shuffleArray(int a[], int n) {
    for (int i = 0, q = 1, k = n; i < n; i++, k++, q++) {
        for (int j = k; j > i + q; j--) {
            int temp = a[j - 1];
            a[j - 1] = a[j];
            a[j] = temp;
        }
    }
}

int main() {
    int a[] = {2, 5, 1, 3, 4, 7};
    int length = sizeof(a) / sizeof(a[0]);
    shuffleArray(a, length / 2);
    printf("After the shuffled integers are: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
