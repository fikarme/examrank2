// The strspn() function spans the initial part of the null-terminated
// string s as long as the characters from s occur in the null-terminated
// string charset.  In other words, it computes the string array index of
// the first character of s which is not in charset, else the index of the
// first null character.
// 
#include <stdio.h>
int varyok(const char *s, int c)
{
	while(*s)
	{
		if(*s==c)
			return 0;
		s++;
	}
	return 1;
}
size_t ft_strspn(const char *s, const char *accept)
{
	size_t i=0;
	while(s[i])
	{
		if(varyok(accept, s[i]))
			break;
		i++;
	}
	return i;
}

#include <string.h>
int main(int ac, char **av)
{
    printf("%lu\n", ft_strspn(av[1], av[2]));
    printf("%lu\n", strspn(av[1], av[2]));
}