#include <stdio.h>

typedef struct rectangle rectangle;

struct rectangle {
	int width;
	int height;
};

int main(void) {
	rectangle x;
	x.width = 5;
	x.height = 6;

	printf("Height: %d, Width: %d", x.height, x.width);
}