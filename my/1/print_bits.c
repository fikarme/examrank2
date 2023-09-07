// Write a function that takes a byte,
// and prints it in binary WITHOUT A NEWLINE AT THE END.
// Example, if you pass 2 to print_bits, it will print "00000010"
#include <unistd.h>
void print_bits(unsigned char octet)
{
	int i=8;
	unsigned char bit;
	while(i--)
	{
		bit=(octet >> i & 1) + '0';
		write(1,&bit,1);
	}
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(void)
{
	print_bits(0);
	ft_putchar('\n');
	print_bits(1);
	ft_putchar('\n');
	print_bits(2);
	ft_putchar('\n');
	print_bits(3);
	ft_putchar('\n');
	print_bits(42);
	ft_putchar('\n');
	print_bits(31);
	ft_putchar('\n');
}