#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define TOTAL_NUMBER	119

int main(int argc, char **argv)
{
	int a, b, i;
	
	srand(time(NULL));

	for (i=0; i<1; i++)		/* for verifying srand function */
	{
		b = rand();
		a = (b % TOTAL_NUMBER) +1;	/* start from 1 */
		printf ("%d ", a);
		printf ("(%d) ", b);
	}

	printf("\n");

	return 0;
}
