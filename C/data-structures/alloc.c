#include <ctype.h>
#include <stdio.h>

int main() {
    int age = 5;

    int* mage = (int *)malloc(sizeof(int));

    if (mage == NULL) {
        return 1;
    }

    printf("%d\n", age);

    printf("%u\n", &mage);

    *mage = age;

    printf("%d\n", *mage);

    free(mage);
}