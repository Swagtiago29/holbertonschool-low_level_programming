#include <stdio.h>

int test(void)
{
	printf("Hello world");
}

int main(void)
{
	int x = test();

	printf("%d\n", x);

	return 0;
}
