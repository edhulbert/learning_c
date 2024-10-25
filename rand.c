#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 0;
	int r;

	while (i<10) {
		printf("i is %d\n", i);
		i++;
	}
	do {
       		r = rand()  100; // Get a random number between 0 and 99
        	printf("%d\n", r);
    	} while (r != 37);    // Repeat until 37 comes up

}
