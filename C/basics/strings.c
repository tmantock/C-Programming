#include <stdio.h>
#include <string.h>

size_t my_strlen(const char* str);
char* strstr(const char* haystack, const char* needle);
char* my_strcat(char* dest, char* src);

int main(void) {
    char c[50] = "Barry, ";
    char *s = "Hello World";

    int l = my_strlen(s);

    printf("%d\n", l);

    printf("%c\n", s[4]);

    printf("%c\n", s[l]);

    printf("%p\n", s);

    my_strcat(c, s);

    printf("%s\n", c);

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

char* strstr(const char* haystack, const char* needle) {
    if(haystack == NULL || needle == NULL) {
        return NULL;
    }

    while(*haystack != '\0') {
        if(*haystack == *needle) {
            const char* h = haystack;
            const char* n = needle;
            while(*n != '\0' && *h == *n) {
                n++;
                h++;
            }
            if(*n == '\0') {
                return (char*) haystack;
            }
        }
        haystack++;
    }

    return NULL;
}

int strcmp(const char* str1, const char* str2) {
    if(str1 == NULL && str2 == NULL) {
        return 0;
    }

    if(str1 == NULL) {
        return 0 - *str2;
    }

    if(str2 == NULL) {
        return *str1;
    }

    const char* ch1 = str1;
    const char* ch2 = str2;

    while(*ch1 != '\0' && *ch2 != '\0') {
        if(*ch1 != *ch2) {
            return *ch1 - *ch2;
        }

        ch1++;
        ch2++;
    }

    if(*ch1 == '\0' && *ch2 != '\0') {
        return 0 - *ch2;
    }

    if(*ch1 != '\0' && *ch2 == '\0') {
        return *ch1;
    }

    return 0;
}

char* my_strcat(char* dest, char* src) {
    if(dest == NULL || src == NULL) {
        return dest;
    }

    char* d = dest;
    while(*d != '\0') {
        d++;
    }

    while(*src != '\0') {
        *d = *src;
        d++;
        src++;
    }
    *d = '\0';

    return dest;
}