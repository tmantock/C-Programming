#include <stdio.h>
#include <ctype.h>

void print_bits(int num);
int reverse_bits(int num);

int main(void) {
    int x = 6;
    print_bits(x);
    int y = reverse_bits(x);
    print_bits(y);
}

void print_bits(int num) {
    unsigned int check = 1 << (sizeof(int) * 8 - 1);

    int inc = 1;

    while(check != 0) {
        int result = num & check;
        if(result == check) {
            printf("%d", 1);
        } else {
            printf("%d", 0);
        }

        check = check >> 1;

        if(inc == 4) {
            inc = 0;
            printf(" ");
        }

        inc++;
    }

    printf("\n");
}

int reverse_bits(int num) {
    int rev = 0;
    unsigned int count = sizeof(int) * 8 - 1;

    while(num != 0) {
        int lb = num & 1;
        rev = rev | lb;
        rev = rev << 1;
        num = num >> 1;
        count--;
    }

    rev = rev << count;

    return rev;
}