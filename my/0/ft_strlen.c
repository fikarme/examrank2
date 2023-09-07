int ft_strlen(char *str)
{
	int i=0;
	while(str[i])
		i++;
	return(i);
}
#include <stdio.h>
int main(int ac, char **av)
{
    printf("%d",ft_strlen(av[1]));
}