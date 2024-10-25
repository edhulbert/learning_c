#include <stdio.h>

int foo(void); // This is the prototype, if we didn't have this,
               // the program wouldn't compile

int main(void)
{
	int i;

	i = foo();

	printf("%d\n", i); // 12345
}

int foo(void)
{
	return 12345;
}
