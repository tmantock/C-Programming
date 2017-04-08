#include <stdio.h>
#include <string.h>

size_t my_strlen(const char* str);

int main(void) {
    char *s = "Hello World";

    int l = my_strlen(s);

    printf("%d\n", l);

    printf("%c\n", s[4]);

    printf("%c\n", s[l]);

    printf("%p", s);
}

size_t my_strlen(const char* str) {
    if(str == NULL) {
        return 0;
    }

    int length = 0;
    const char *ch = str;
    while(*ch != '\0') {
        length++;
        ch++;
    }
    return length;
}
