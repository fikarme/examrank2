// takes two strings and checks whether it's possible to write the first string with
// characters from the second string, while respecting the order in which these
// characters appear in the second string.
// $>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
// faya$
// $>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
// $
// $>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
// quarante deux$
// $>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
// $
// $>./wdmatch | cat -e
// $
#include <unistd.h>
// void ft_putstr(char const *str)
// {
// 	int i = 0;

// 	while (str[i])
// 		write(1, &str[i++], 1);
// }
// int	main(int argc, char const *argv[])
// {
// 	int i = 0;
// 	int j = 0;

// 	if (argc == 3)
// 	{
// 		while (argv[2][j])
// 			if (argv[2][j++] == argv[1][i])
// 				i += 1;
// 		if (!argv[1][i])
// 			ft_putstr(argv[1]);
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }
//
// void put(char *s)
// {
// 	int i=0;
// 	while(s[i])
// 		write(1,&s[i++],1);
// }
// int main(int ac, char **av)
// {
// 	int i=0;
// 	int j=0;
// 	if(ac==3)
// 	{
// 		while(av[2][j])
// 			if(av[2][j++]==av[1][i])
// 				i++;
// 		if(!av[1][i])
// 			put(av[1]);
// 	}
// 	write(1,"\n",1);
// }
//
void	wdmatch(char *s1, char *s2)
{
	int len = 0;
	int i = 0;

	while (s1[len])
		++len;
	while (*s2 && i < len)
		(*s2++ == s1[i]) ? ++i : 0;
	if (i == len)
		write(1, s1, len);
}
int		main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1,"\n",1);
	return (0);
}