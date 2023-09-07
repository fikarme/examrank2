//  0100 | 0001
//      \ /
//      / \
//  0001 | 0100
unsigned char swap_bits(unsigned char octet)
{
	return((octet>>4) | (octet<<4));
}
#include <unistd.h>
#include <stdio.h>
int main(int ac,char **av)
{
	unsigned char c=av[1][0];
	write(1,&c,1);
	write(1,"\n",1);
	c=swap_bits(c);
	write(1,&c,1);
	write(1,"\n",1);
}