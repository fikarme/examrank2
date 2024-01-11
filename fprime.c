#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
// Allowed functions: printf, atoi
// Write a program that takes a positive int and displays its prime factors on the
// standard output, followed by a newline.
// Factors must be displayed in ascending order and separated by '*', so that
// the expression in the output gives the right result.
// $> ./fprime 225225 | cat -e
// 3*3*5*5*7*11*13$
// $> ./fprime 8333325 | cat -e
// 3*3*5*5*7*11*13*37$
// $> ./fprime 9539 | cat -e
// 9539$
// $> ./fprime 804577 | cat -e
// 804577$
// $> ./fprime 42 | cat -e
// 2*3*7$
// $> ./fprime 1 | cat -e
// 1$
// $> ./fprime | cat -e
// $
// $> ./fprime 42 21 | cat -e
// $
int is_prime(int n)
{
	int i=2;
	while(i < n)
	{
		if(n % i == 0)
			return 0;
		i++;
	}
	return 1;
}
int main(int ac, char **av)
{
	if(ac==2)
	{
		int factor = 2;
		int first = 1;
		int n = atoi(av[1]);
		if(n==1)
			printf("1");
		while(factor <= n)
		{
			if(n % factor == 0 && is_prime(factor))
			{
				if(first==1)
					printf("%d", factor);
				else
					printf("*%d", factor);
				first = 0;
				n /= factor;
			}
			else
				factor++;
		}
	}
	printf("\n");
}
