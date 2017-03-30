#include <stdio.h>
#include <string.h>
#include "cs50.h"

int main(void) {
	printf("S: ");

	char *s;
	char *t;

	s = get_string();
	t = get_string();

	if(s != NULL && t != NULL) {
		if(strcmp(s, t) == 0) {
			printf("same\n");
		} else {
			printf("not same\n");
		}
	}
}
