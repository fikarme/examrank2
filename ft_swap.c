#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
