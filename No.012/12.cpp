/**
 * Problem Description:
 *
 * The sequence of triangle numbers is generated by adding the natural numbers. So the 7^(th) triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. 
 * The first ten terms would be:1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ... 
 * Let us list the factors of the first seven triangle numbers:

     1: 1
     3: 1,3
     6: 1,2,3,6
    10: 1,2,5,10
    15: 1,3,5,15
    21: 1,3,7,21
    28: 1,2,4,7,14,28

 * We can see that 28 is the first triangle number to have over five divisors.

 * What is the value of the first triangle number to have over five hundred divisors?
 */


/**
 * Solution:
 *
 */


#include <stdio.h>
#include <time.h>

int checkDiviNum(int num)
{
	int limit = num / 2;
	int count = 0;
	for(int i = 1; i <= limit; i++)
	{
		if(num%i == 0)
		{
			count ++;
		}
	}
	return count;
}

int findTriNum(int divNum)  // This damn stupid funciton cost 1400 seconds,OMG, fk me so hard!!
{
	double start = clock();
	int sum = 0;
	for (int n = 1; ; n++)
	{
		sum = n*(n+1)/2;
		if(checkDiviNum(sum) >= divNum) break;
	}
	double end = clock() - start;
	end = end / 1000;
	printf("%f\n", end);
	return sum;
}


int main()
{
	
	printf("%d", findTriNum(500));
	return 0;
}