// $> ./do_op "123" "*" 456 | cat -e
// 56088$
// $> ./do_op "9828" "/" 234 | cat -e
// 42$
// $> ./do_op "1" "+" "-43" | cat -e
// -42$
// $> ./do_op | cat -e
// $ + - * / %
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	if(ac==4)
	{
		if(av[2][0]=='*')
			printf("%d", atoi(av[1]) * atoi(av[3]));
		if(av[2][0]=='/')
			printf("%d", atoi(av[1]) / atoi(av[3]));
		if(av[2][0]=='%')
			printf("%d", atoi(av[1]) % atoi(av[3]));
		if(av[2][0]=='+')
			printf("%d", atoi(av[1]) + atoi(av[3]));
		if(av[2][0]=='-')
			printf("%d", atoi(av[1]) - atoi(av[3]));
	}
	printf("\n");
}