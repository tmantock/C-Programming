#include <stdio.h>
#include <string.h>

int main(void) {
    char *s = "Hello World";

    int l = strlen(s);

    printf("%d\n", l);

    printf("%c\n", s[4]);

    printf("%c\n", s[l]);
}
