#include <stdio.h>

typedef struct rectangle rectangle;

typedef struct circle circle;

struct circle {
	int radius;
	int diameter;
};

struct rectangle {
	int width;
	int length;
};

int area(rectangle r);

int circumference(circle c);

double average(int *arr, int size);

int main(void) {
	rectangle x;
	x.width = 5;
	x.length = 6;

	int a = area(x);

	int r[5] = {134, 2565, 376, 4877, 5988};

	double avg = average(r, 5);

	printf("Average: %f\n", avg);

	printf("Area: %d\n", a);
}

int area(rectangle r) {
	return r.width * r.length;
}

int circumference(circle c) {
	return c.diameter * 3.14;
}

double average(int *arr, int size) {
	int sum = 0;

	for(int i = 0; i < size; i++) {
		sum += arr[i];
	}

	return (double)(sum / size);
}