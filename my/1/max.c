// The first parameter is an array of int,
// the second is the number of elements in the array.
// The function returns the largest number found in the array.
// If the array is empty, the function returns 0.
int max(int *tab, unsigned int len)
{
	if(len==0)
		return 0;
	int res=tab[0];
	unsigned int i=0;
	while(i<len)
	{
		if(res<tab[i])
			res = tab[i];
		i++;
	}
	return (res);
}
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    if (argc < 3)
        return(0);
    int *tab = malloc(sizeof(int) * (argc - 1));
    for (unsigned int i = 2; i < argc; i++)
    {
        if (i != argc - 1)
        tab[i - 2] = atoi(argv[i]);
    }
    printf("%d\n", max(tab, atoi(argv[1])));
    // printf("max(\"%s\") = %d\n", argv[1], is_power_of_2(atoi(argv[1])));
    return(0);
}