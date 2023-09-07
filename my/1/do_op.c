// Allowed functions: atoi, printf, write
// Write a program that takes three strings:
// - The first and the third one are representations of base-10 signed integers
//   that fit in an int.
// - The second one is an arithmetic operator chosen from: + - * / %
// You can assume the string have no mistakes or extraneous characters. Negative
// numbers, in input or output, will have one and only one leading '-'. The
// result of the operation fits in an int.
// $> ./do_op "123" "*" 456 | cat -e
// 56088$
// $> ./do_op "9828" "/" 234 | cat -e
// 42$
// $> ./do_op "1" "+" "-43" | cat -e
// -42$
// $> ./do_op | cat -e
// $
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if(ac==4)
	{
		if(av[2][0] == '+')
			printf("%d", (atoi(av[1]) + atoi(av[3])));
		if(av[2][0] == '-')
			printf("%d", (atoi(av[1]) - atoi(av[3])));
		if(av[2][0] == '*')
			printf("%d", (atoi(av[1]) * atoi(av[3])));
		if(av[2][0]== '/')
			printf("%d", (atoi(av[1]) / atoi(av[3])));
		if(av[2][0] == '%')
			printf("%d", (atoi(av[1]) % atoi(av[3])));
	}
	printf("\n");
}