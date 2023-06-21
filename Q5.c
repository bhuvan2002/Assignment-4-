#include <stdio.h>

int arrangeCoins(int n) {
    int level = 0;
    int coin = 1;
    while (n >= coin) {
        n -= coin;
        coin++;
        level++;
    }
    return level;
}

int main() {
    int n = 5;
    int result = arrangeCoins(n);
    printf("%d\n", result);
    return 0;
}
