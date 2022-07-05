#include <stdlib.h>

#include <time.h>

#include <stdio.h>
/**
 * main - entry point of program
 * if else: checks random number n using the conditions given
 *
 * Return: 0 if the code is successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) 
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
