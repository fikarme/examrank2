// $>./search_and_replace "Papache est un sabre" "a" "o"
// Popoche est un sobre
// $>./search_and_replace "zaz" "art" "zul" | cat -e
// $
// $>./search_and_replace "zaz" "r" "u" | cat -e
// zaz$
// $>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
// $
// $>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
// ZaZ eT David aiME le METal.$
// $>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
// eNcOre Un ExEmPle Pas Facile a Ecrire $
#include <unistd.h>
int	main(int ac, char **av)
{
	int	i=0;
	if(ac==4 && !av[2][1] & !av[3][1])
	{
		while(av[1][i])
		{
			if(av[1][i]==av[2][0])
				av[1][i] = av[3][0];
			write(1,&av[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
}