/**
 * Problem description:
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 * @note prime factor: 素数因子
 * 
 */

/**
 * Solution: using "the Sieve of Eratosthenes"(埃拉托色尼筛选法) to sieve the prime number.
 * 
 * To find all the prime numbers less than or equal to a given integer n  by Eratosthenes' method:
 *
 *  1. Create a list of consecutive integers from two to n: (2, 3, 4, ..., n).
 *  2. Initially, let p equal 2, the first prime number.
 *  3. Strike from the list all multiples of p less than or equal to n. (2p, 3p, 4p, etc.)
 *  4. Find the first number remaining on the list after p (this number is the next prime); replace p with this number.
 *  5. Repeat steps 3 and 4 until p2 is greater than n.
 *  6. All the remaining numbers in the list are prime.
 *
 * For this problem, we just need to get the max prime number less than. The list to store prime number is not necessary.
 * We just decompose the composite number N into some prime numbers. So we try to use prime numbers to devide the number N
 * The prime numbers is bigger enough when it is the sqrare root of n.This is a improvement for the Sieve of Eratosthenes.
 */
#include <stdio.h>
#include <math.h>

double seekMaxPrime(double n) 
{
	while (fmod(n,2) == 0)  // fmod() is the substitude method to '%' , it is used for float or double number.
	{
		n = n / 2;
	} 
	
	int i = 3;

	for (; i <= sqrt(n);  )  // when i == sqrt(n), it is enough.
	{

		if (fmod(n,i) == 0)
		{
			n = n / i;

		} 
		else 
		{
			i = i + 2;
		}
		
	}
	
	
	return n;

}


int main() 
{
	printf("%.0f", seekMaxPrime(600851475143));

	return 0;
}

