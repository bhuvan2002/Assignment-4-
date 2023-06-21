#include <stdio.h>

int maxCount(int m, int n, int ops[][2], int opsLength) {
    if (opsLength == 0) {
        return m * n;
    }
    int min[2] = {m, n};
    for (int i = 0; i < opsLength; i++) {
        int x = ops[i][0];
        int y = ops[i][1];
        min[0] = (x < min[0]) ? x : min[0];
        min[1] = (y < min[1]) ? y : min[1];
    }
    return min[0] * min[1];
}

int main() {
    int m = 3;
    int n = 3;
    int ops[][2] = {
        {2, 2},
        {3, 3}
    };
    int opsLength = sizeof(ops) / sizeof(ops[0]);
    int result = maxCount(m, n, ops, opsLength);
    printf("%d\n", result);
    return 0;
}
