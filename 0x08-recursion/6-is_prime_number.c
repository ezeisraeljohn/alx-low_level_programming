/**
 * check_prime_recursive - check recursion
 * @dividend: The number to check for primality.
 * @divisor: The current divisor to test.
 *
 * Return: 1 if the number @n is prime, 0 otherwise.
 */
int check_prime_recursive(int dividend, int divisor)
{
	/* Base cases */
	if (dividend <= 1)
		return (0); /*any negative number or the number 1, is not a prime number */
	if (dividend == 2 || dividend == 3)
		return (1);
	if (dividend % 2 == 0)
		return (0);
	if ((divisor * divisor) > dividend)
		return (1);

	/* The number is divisible by another number, so it's not prime */
	if (dividend % divisor == 0)
		return (0);

	/* Recursively check the next divisor */
	return (check_prime_recursive(dividend, divisor + 2));
}

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check
 *
 * Return: 1 if the number @n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (check_prime_recursive(n, 3));
}
