#include <stdio.h>

typedef struct object {
    int data;
} object;

object* gen_array();

int main(void) {
    object *c = gen_array();
    for(int i = 0; i < 5; i++) {
        printf("%d\n", (c[i]).data);
    }
}

object* gen_array() {
    static object x[5];

    for(int i = 0; i < 5; i++) {
        object y;
        y.data = i;
        x[i] = y;
    }

    return x;
}

