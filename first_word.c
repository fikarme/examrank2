#include <unistd.h>
int main(int ac, char **av)
{
	int i=0;
	char *s=av[1];
	if(ac==2)
	{
		while(s[i]==' ' || s[i]=='\t')
			i++;
		while(s[i] && s[i]!=' ' && s[i]!='\t')
		{
			write(1,&s[i],1);
			i++;
		}
	}
	write(1,"\n",1);
}