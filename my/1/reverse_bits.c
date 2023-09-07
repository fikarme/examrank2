//  0100  0001	| 2 00110010
//      ||		| L 01001100
//      \/
//  1000  0010
unsigned char reverse_bits(unsigned char octet)
{
	int i=8;
	unsigned char res=0;
	while(i>0)
	{
		res=res*2+(octet%2);
		octet=octet/2;
		i--;
	}
	return res;
}
#include <unistd.h>
int main(int ac,char **av)
{
	unsigned char c=av[1][0];
	write(1,&c,1);
	write(1,"\n",1);
	c=reverse_bits(c);
	write(1,&c,1);
	write(1,"\n",1);
}