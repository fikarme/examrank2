// $>./camel_to_snake "hereIsACamelCaseWord"
// here_is_a_camel_case_word
// $>./camel_to_snake "helloWorld" | cat -e
// hello_world$
// $>./camel_to_snake | cat -e
// $
#include <unistd.h>
int main(int ac, char **av)
{
	int i=0;
	if(ac==2)
	{
		while(av[1][i])
		{
			if(av[1][i]>='A' && av[1][i]<='Z')
			{
				write(1,"_",1);
				av[1][i] += ' ';
			}
			write(1,&av[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
}
