#include <unistd.h>
int ft_strlen(char *s)
{
	int i=0;
	while(s[i])
		i++;
	return i;
}
void ft_putchar(char c)
{
	write(1,&c,1);
}
int main(int ac, char **av)
{
	if(ac==2)
	{
		int i=0;
		int k=0;
		char *s=av[1];
		char *word=NULL;
		int len = ft_strlen(s) - 1;
		while(s[len])
		{
			if(s[len - 1] == ' ' || len == 0)
			{
				i = len;
				while(s[i] && s[i] != ' ')
				{
					write(1,&s[i],1);
					i++;
				}
				if(len)
					write(1," ",1);
			}
			// else if(len == 0)
			// {
			// 	i = len;
			// 	while(s[i] && s[i] != ' ')
			// 	{
			// 		write(1,&s[i],1);
			// 		i++;
			// 	}
			// }
			len--;
		}
	}
	write(1,"\n",1);
}