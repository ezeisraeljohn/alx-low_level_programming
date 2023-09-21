#include <stdio.h>

/**
 * main - this is used to learn
 *
 * Return: 0
 */
int main(void)
{
	int x;
	char c;
	float y;

	printf("address of x = %p, content of x = %d\n", &x, x);
	 printf("address of y = %p, content of y = %2f\n", &y, y); 
	 printf("address of c = %p, content of c = %c\n", &c, c);
	 char str1[] = {‘A’, ‘ ‘,
		  ‘s’, ‘t’, ‘r’, ‘i’, ‘n’, ‘g’, ‘ ‘,
		 ‘c’, ‘o’, ‘n’, ‘s’, ‘t’, ‘a’, ‘n’, ‘t’, ‘\0’};
	 arr(str1);
	 


	return (0);
}
/**
 *  arr - This functon prints array characters 
 * @car - character parameter
 *
 * Return: return character 
 */
void  arr(char car)
{
	char i;
	
	for (; car[i] != '\0'; i++)
	{
		printf(car[i]);
		
