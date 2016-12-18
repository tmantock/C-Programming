#include <stdio.h>

int main(){

    int x = 10;
    short y = 90;
    long z = 5000671;

    printf("%d, %d, %ld \n", x, y, z);
    printf("%c, %c \n", x, y);

    short unsigned int students = 65535;
    long unsigned int teachers = 4294967295;

    printf("%ud, %lu \n", students, teachers);

    float fl = 2.718;
    double db = 3.145;
    long double ldb = 4.555483847645;
    printf("%.3f, %.3f, %.12Lf \n", fl, db, ldb);

    char a = 'a';
    char b = 'b';
    printf("%c, %c \n", a, b);

    return 0;
}