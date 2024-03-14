#include <stdio.h>
#include "lib_add_sub.h"
#include "lib_print.h"

int main()
{
	hello();
	content();
	printf("a + b = %d\n", add(6,5));
	printf("a - b = %d\n", sub(6, 5));

	return 0;
}
