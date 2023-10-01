/**
 * get_sqrt - gets the square of a number - a helper function
 * @number: number to check its square root
 * @root: the root
 *
 * Return: square root on number else -1 if number is not a natural
 * square root
 */
int get_sqrt(int number, int root)
{
	if ((root * root) > number)
		return (-1);
	if ((root * root) == number)
		return (root);
	return (get_sqrt(number, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @number: number
 *
 * Return: natural square root of a number
 */
int _sqrt_recursion(int number)
{
	if (number < 0)
		return (-1);
	return (get_sqrt(number, 0));
}
