char *ft_strpbrk(const char *s1, const char *s2)
{
	int i=0;
	int j=0;
	if(!s1||!s2)
		return(0);
	while(s1[i])
	{
		j=0;
		while(s2[j])
		{
			if(s1[i]==s2[j])
				return((char *)s1);
			j++;
		}
		i++;
	}
	return(0); //null mu 0 mı?
}
#include <stdio.h>
#include <string.h>
int main(int ac, char **av)
{
    printf("%s\n", ft_strpbrk(av[1], av[2]));
    printf("%s\n", strpbrk(av[1], av[2]));
}