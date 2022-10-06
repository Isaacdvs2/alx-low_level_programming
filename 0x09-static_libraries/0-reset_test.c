#include <stdio.h>
#include "main.h"

int main(void)
{
	int n;
	n = 402;

	printf("value of n before reset : %d\n",n);
	printf("Address of n before reset : %p\n",&n);
	printf("==========Applying the reset method ==========");
	reset_to_98(&n);
	printf("value of n after reset : %d\n",n);
	printf("Address of n after reset : %p\n",&n);

return (0);
}
