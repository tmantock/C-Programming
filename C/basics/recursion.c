#include <stdio.h>

int cough(int n);

int main(void) {
	cough(5);
}

int cough(int n) {
	if(n == 0) {
		return n;
	}

	printf("Cough!!!\n");
	n--;

	cough(n);
}
