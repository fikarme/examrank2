// $>./rotone "abc"
// bcd
// $>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
// Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
// $>./rotone "AkjhZ zLKIJz , 23y " | cat -e
// BlkiA aMLJKa , 23z $
// $>./rotone | cat -e
// $
// $>
// $>./rotone "" | cat -e
// $
// $>
#include <unistd.h>
int	main(int ac, char **av)
{
	int i=0;
	if(ac==2)
	{
		while(av[1][i])
		{
			if((av[1][i]>='a' && av[1][i]<='y') ||
			(av[1][i]>='A' && av[1][i]<='Y'))
				av[1][i] += 1;
			else if(av[1][i]=='z' || av[1][i]=='Z')
				av[1][i] = 'a';
			write(1,&av[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
}