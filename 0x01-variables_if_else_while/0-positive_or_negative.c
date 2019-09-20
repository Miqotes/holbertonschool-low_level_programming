#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*Return: returns 0 */
/**main - prints a random number as positive, zero, or negative depending
on relation to zero */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n",n);
	     if (n == 0)
		     printf("%d is zero\n",n);
	     if (n < 0)
		     printf("%d is negative\n",n);
	return (0);
}
