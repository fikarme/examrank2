int ft_atoi(char *s)
{
    int res=0;
	int i=0;
    int sign=1;
    while(s[i]==' '|| (s[i]>=9 && s[i]<=13))
        i++;
    if(s[i]=='-')
        sign = -1;
    if(s[i]=='-' || s[i]=='+')
        i++;
    while(s[i]>='0' && s[i]<= '9')
    {
        res = res * 10 + s[i] - '0';
        i++;
    }
    return(sign * res);
}
#include <stdio.h>
int main(int ac, char **av)
{
    printf("%d", ft_atoi(av[1]));
}