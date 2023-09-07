// $>./camel_to_snake "here_is_a_snake_case_word"
// hereIsASnakeCaseWord
// $>./camel_to_snake "hello_world" | cat -e
// helloWorld$
// $>./camel_to_snake | cat -e
// $
#include <unistd.h>
int main(int ac,char **av)
{
	int i=0;
	if(ac==2)
	{
		while(av[1][i]!='\0')
		{
			if(av[1][i]=='_')
			{
				i++;
				av[1][i]=av[1][i]-32;
			}
			write(1,&av[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
}