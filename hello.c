/* Hello wooooorld!! */

#include <stdio.h>

int main(void)
{
	int i; // holds signed ints -3, 0, 2
	float f = 3.14;
	i = 2;
	char *s = "Hello world"; // char * = char pointer!!

	// printf("Hello, World!!"); // comment!
	printf("%s i = %d and f = %f!", s, i, f);
	printf("%zu",sizeof i);
	printf("%zu",sizeof f);
	printf("%zu",sizeof s);
}

