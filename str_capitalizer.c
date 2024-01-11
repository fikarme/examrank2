// $> ./str_capitalizer | cat -e
// $
// $> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
// A First Little Test$
// $> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
// __second Test A Little Bit   Moar Complex$
//    But... This Is Not That Complex$
//      Okay, This Is The Last 1239809147801 But Not    The Least    T$
// $>
#include <unistd.h>
void strcap(char *s)
{
	int i=0;
	while(s[i])
	{
		while(s[i]==' ' || s[i]=='\t')
		{
			write(1,&s[i],1);
			i++;
		}
		if(s[i])
		{
			if(s[i]>='a' && s[i]<='z')
				s[i] -= ' ';
			write(1,&s[i],1);
			i++;
		}
		while(s[i] && s[i]!=' ' && s[i]!='\t')
		{
			if(s[i]>='A' && s[i]<='Z')
				s[i] += ' ';
			write(1,&s[i],1);
			i++;
		}
	}
	write(1,"\n",1);
}
int main(int ac, char **av)
{
	if(ac==1)
		write(1,"\n",1);
	else
	{
		int i=1;
		while(i < ac)
		{
			strcap(av[i]);
			i++;
		}
	}
}