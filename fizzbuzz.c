#include <unistd.h>
void put(int i)
{
	char s[10]="0123456789";
	if(i > 9)
		put(i / 10);
	write(1,&s[i % 10],1);
}
int main()
{
	int i=1;
	while(i<101)
	{
		if(i % 15 == 0)
			write(1,"fizzbuzz",8);
		else if(i % 3 == 0)
			write(1,"fizz",4);
		else if(i % 5 == 0)
			write(1,"buzz",4);
		else
			put(i);
		write(1,"\n",1);
		i++;
	}
}