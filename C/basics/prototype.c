#include <stdio.h>

void print_number(int n);

int main(void) {
	int i = 10;
	print_number(i);
}

void print_number(int n) {
	printf("%d", n);
}
