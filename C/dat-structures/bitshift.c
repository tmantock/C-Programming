#include <stdio.h>

int main(void) {
    int x = 6;
    x = x << 2;

    printf("%d\n", x);

    int y = 12;
    y = y >> 1;

    printf("%d\n", y);

    printf("%d\n", x & y);
}