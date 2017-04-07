#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int age = 5;

    cout << age << endl;

    int* m = (int*) malloc(sizeof(int));

    if (m == NULL)
        return 1;

    cout << m << endl;

    *m = age;

    cout << *m << endl;

    free(m);

    return 0;
}