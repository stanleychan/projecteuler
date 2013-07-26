/*
 ============================================================================
 Name        : 14.c
 Author      : Stanley
 Version     : 0.1
 Copyright   : Your copyright notice
 Description : ProjectEuler NO.14

The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:
13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms.
Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define bool _Bool
#define TRUE 1
#define FALSE 0

int main(void)
{
	//printf ("%d", findTheStartNum(1000000));
	long long num;
	int count  = 0;
	int high   = 0;
	int startn = 0;
	int i;

	for (i = 3; i < 1000000; i += 2)
	{
		num = i;
		count = 1;

		while (num > 1)
		{
			if (num % 2 == 0)
				num /= 2;
			else
				num = (num * 3) + 1;

			count++;
		}

		if (count > high)
		{
			high = count;
			startn = i;
		}
	}

	printf("\n Startnum: %d, terms: %d\n", startn, high);
	return EXIT_SUCCESS;
}
