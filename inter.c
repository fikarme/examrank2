#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
// $>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// padinto$
// $>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6ewg4$
// $>./inter "rien" "cette phrase ne cache rien" | cat -e
// rien$
// $>./inter | cat -e
// $
int main(int ac, char **av)
{
	if(ac==3)
	{
		int i=0;
		int k=0;
		int l=0;
		char *s1=av[1];
		char *s2=av[2];
		while(s1[i])
		{
			k=0;
			while(s2[k])
			{
				if(s1[i] == s2[k])
				{
					l=0;
					while(s1[l] != s2[k])
						l++;
					if(l == i)
					{
						l=0;
						while(s2[l] != s2[k])
							l++;
						if(l == k)
							write(1,&s1[i],1);
					}
				}
				k++;
			}
			i++;	
		}
	}
	write(1,"\n",1);
}