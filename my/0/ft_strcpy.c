char *ft_strcpy(char *s1, char *s2)
{
	int i=0;
	while(s2[i])
	{
		s1[i]=s2[i];
		i++;
	}
	s1[i]=0;
	return(s1);
}
#include <stdlib.h>
#include <stdio.h>
int main(int ac,char **av)
{
    char *str=malloc(100);
    printf("%s",ft_strcpy(str, av[1]));
    free(str);
}