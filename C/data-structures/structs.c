#include <stdio.h>

typedef struct circle {
	int radius;
	int diameter;
} circle;

typedef struct rectangle {
	int width;
	int length;
} rectangle;

int area(rectangle *r);

double circumference(circle *c);

double average(int *arr, int size);

int main(void) {
	rectangle x;
	circle c;

	x.width = 5;
	x.length = 6;

	c.radius = 6;
	c.diameter = c.radius * 2;

	int a = area(&x);

	double cm = circumference(&c);

	int r[5] = {134, 2565, 376, 4877, 5988};

	double avg = average(r, 5);

	printf("Average: %f\n", avg);

	printf("Area: %d\n", a);

	printf("Circumference: %f", cm);
}

int area(rectangle *r) {
	return (*r).width * (*r).length;
}

double circumference(circle *c) {
	return (double)((*c).diameter * 3.14);
}

double average(int *arr, int size) {
	int sum = 0;

	for(int i = 0; i < size; i++) {
		sum += arr[i];
	}

	return (double)(sum / size);
}