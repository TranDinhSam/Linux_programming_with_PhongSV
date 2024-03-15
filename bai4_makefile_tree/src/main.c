#include <stdio.h>
#include "func.h"

int main()
{
	int a = 5, b = 4;
	hello();
	printf("a + b = %d\n", add(a, b));
	printf("a - b = %d\n", sub(a, b));
	
	return 0;
}
