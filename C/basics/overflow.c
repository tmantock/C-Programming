#include <stdio.h>

int main(void) {
	int i = 1;
	for(int x = 0; x < 64; x++) {
		printf("%d: is %d \n", x, i);
		i *= 2;
	}
}
