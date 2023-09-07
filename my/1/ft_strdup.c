#include <stdlib.h>
char *ft_strdup(char *src)
{
    int i=0;
	int len=0;
    char *dup;
    while(src[len])
        len++;
    dup=malloc(len + 1);
    if(dup==NULL)
		return(NULL);
    while(src[i])
    {
        dup[i]=src[i];
        i++;
    }
    dup[i]=0;
    return(dup);
}
#include <stdio.h>
int main(int ac, char **av)
{
    char *akif=malloc(100);
    akif=av[1];
    printf("%s %p\n", akif, akif);
    char *emre=ft_strdup(akif);
    printf("%s %p\n", emre, emre);
}