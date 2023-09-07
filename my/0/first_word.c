// $> ./first_word "FOR PONY" | cat -e
// FOR$
// $> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
// this$
// $> ./first_word "a" "b" | cat -e
// $
// $> ./first_word "  lorem,ipsum  " | cat -e
// lorem,ipsum$
// $>
#include <unistd.h>
void put(char c)
{
	write(1,&c,1);
}
int	main(int ac, char **av)
{
	int i=0;
	if(ac==2)
	{
		while(av[1][i]==' ' || av[1][i]=='\t')
			i++;
		while(av[1][i] && av[1][i]!=' ' && av[1][i]!='\t')
		{
			put(av[1][i]);
			i++;
		}
	}
	put('\n');
}