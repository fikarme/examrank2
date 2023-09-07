void ft_swap(int *a, int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
#include <stdio.h>
int main()
{
	int *a;
	int aa;
	aa=1;
	a=&aa;
	int *b;
	int bb;
	bb=2;
	b=&bb;
	ft_swap(a,b);
	printf("%d %d", *a, *b);
}