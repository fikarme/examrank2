// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | cat -e
// Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
// $>./repeat_alpha 'abacadaba 42!' | cat -e
// abbacccaddddabba 42!$
// $>./repeat_alpha | cat -e
// $
// $>
// $>./repeat_alpha "" | cat -e
// $
// $>
#include <unistd.h>
void put(char c, int i)
{
	while(i>0)
	{
		write(1,&c,1);
		i--;
	}
}
int main(int ac, char **av)
{
	if(ac==2)
	{
		int i=0;
		char *s=av[1];
		while(s[i])
		{
			if(s[i]>='A' && s[i]<='Z')
				put(s[i], s[i] - 64);
			else if(s[i]>='a' && s[i]<='z')
				put(s[i], s[i] - 96);
			else
				write(1,&s[i],1);
			i++;
		}
	}
	write(1,"\n",1);
}