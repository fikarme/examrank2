#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

// $>./tab_mult 9
// 1 x 9 = 9
// 2 x 9 = 18
// 3 x 9 = 27
// 4 x 9 = 36
// 5 x 9 = 45
// 6 x 9 = 54
// 7 x 9 = 63
// 8 x 9 = 72
// 9 x 9 = 81
// $>./tab_mult 19
// 1 x 19 = 19
// 2 x 19 = 38
// 3 x 19 = 57
// 4 x 19 = 76
// 5 x 19 = 95
// 6 x 19 = 114
// 7 x 19 = 133
// 8 x 19 = 152
// 9 x 19 = 171

int ft_atoi(char *s)
{
	int n=0;
	int i=0;
	while(s[i]>='0' && s[i]<='9')
	{
		n = n * 10;
		n = n + s[i] - '0';
		i++;
	}
	return n;
}

void ft_putnbr(int n)
{
	if(n>=10)
		ft_putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	if(ac==2)
	{
		int i=1;
		char *s = av[1];
		int n=ft_atoi(s);
		while(i <= 9)
		{
			ft_putnbr(i);
			write(1," x ",3);
			ft_putnbr(n);
			write(1," = ",3);
			ft_putnbr(i*n);
			write(1,"\n",1);
			i++;
		}
	}
	else
		write(1,"\n",1);
}