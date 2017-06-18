#include <stdio.h>

void complement(int n) {
    int mask = -1;
    while(n & mask) {
        mask <<= 1;
    }
    printf("%d\n", mask);
    printf("%d\n", ~n & ~mask);
}

int main(void) {
    int x = 6;
    x = x << 2;

    printf("%d\n", x);

    int y = 12;
    y = y >> 1;

    printf("%d\n", y);

    printf("%d\n", x & y);

    printf("%d\n", ~7 + 1);

    complement(5);
}
