// $>./fizzbuzz
// 1
// 2
// fizz
// 4
// buzz
// [...]
// 14
// fizzbuzz
// [...]
// 98
// fizz
// buzz
// $>
#include <unistd.h>
void putn(int n)
{
	char str[10]="0123456789";
	if (n>9)
		putn(n/10);
	write(1,&str[n%10],1);
}
int	main()
{
	int i=1;
	while(i<=100)
	{
		if(i%3==0 && i%5==0)
			write(1,"fizzbuzz",8);
		else if(i%3==0)
			write(1,"fizz",4);
		else if(i%5==0)
			write(1,"buzz",4);
		else
			putn(i);
		write(1,"\n",1);
		i++;
	}
}