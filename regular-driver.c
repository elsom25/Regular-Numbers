#include <stdio.h>
#include <stdlib.h>

#include "regular.h"

int main()
{
	/* test 1 (small test) */
	printf("Test 1, size = 15:\n");
	int a1[20] = {0};
	regular(a1, 20);
	print_array(a1, 20);
	
	/* test 2 (large test) */
	printf("\nTest 2, size = 500:\n");
	int a2[500] = {0};
	regular(a2, 500);
	print_array(a2, 500);
	
   system("PAUSE");
   return 0;
}
