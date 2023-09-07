// Write a program that takes a positive integer as argument and displays the sum
// of all prime numbers inferior or equal to it followed by a newline.
// If the number of arguments is not 1, or the argument is not a positive number,
// just display 0 followed by a newline.
// $>./add_prime_sum 5
// 10
// $>./add_prime_sum 7 | cat -e
// 17$
// $>./add_prime_sum | cat -e
// 0$
// $>
// write, exit //2,3,5,7
#include <unistd.h>
#include <stdio.h>
int isprime(int n)
{
	if(n<=1)
		return 0;
	int i=2;
	while(i*i<=n)
	{
		if(n%i==0)
			return 0;
		i++;
	}
	return 1;
}
int ft_atoi(char *s)
{
	int n=0;
	int i=0;
	if (!s)
		return (0);
	while(s[i]>='0' && s[i]<='9')
	{
		n*=10;
		n+=s[i]-'0';
		i++;
	}
	return n;
}
void ft_putnbr(int n)
{
	if(n>=10)
		ft_putnbr(n/10);
	char c=(n%10)+'0';
	write(1,&c,1);
}
int main(int ac, char **av)
{
	
    int n=ft_atoi(av[1]);
	int sum=0;
	int i=2;
	if(ac==2 && n)
	{
		while(i<=n)
		{
			if(isprime(i))
				sum+=i;
			i++;
		}
    	ft_putnbr(sum);
	}
	write(1,"\n",1);
}
