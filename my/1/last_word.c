// $> ./last_word "FOR PONY" | cat -e
// PONY$
// $> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
// not$
// $> ./last_word "   " | cat -e
// $
// $> ./last_word "a" "b" | cat -e
// $
// $> ./last_word "  lorem,ipsum  " | cat -e
// lorem,ipsum$
// $>
#include <unistd.h>
int main(int ac, char **av)
{
	int i=0;
	if(ac==2)
	{
		while(av[1][i]!=0)
			i++;
		i--;
		while((av[1][i]==' ' || av[1][i]=='\t') && i!=0)
			i--;
		while(av[1][i]!=' ' && av[1][i]!='\t' && i!=0)
			i--;
		if(av[1][i]==' ' || av[1][i]=='\t')
			i++;
		while(av[1][i]!=0 && av[1][i]!=' ' && av[1][i]!='\t')
		{
			write(1,&av[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
}