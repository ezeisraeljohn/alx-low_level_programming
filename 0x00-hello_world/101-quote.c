#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */ 

int main(void) 
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	 ssize_t num_bytes = write(2, message, 59);
	 if (num_bytes == -1) 
	 {
		 return 1; 
	 }
}

