// str1 : The Target string in which search has to be made.
// str2 : Argument string containing characters
// to match in target string.
// This function returns the number of characters before the 
// 1st occurrence of character present in both the string.
#include <stdio.h>
size_t  ft_strcspn(const char *s, const char *reject)
{
    int i=0;
    int j=0;
    while(s[i])
    {
        j = 0;
        while(reject[j])
        {
            if(s[i]==reject[j])
                return(i);
            j++;
        }
        i++;
    }
    return(i);
}
#include <string.h>
int main(int ac, char **av)
{
    printf("%zu\n", ft_strcspn(av[1], av[2]));
    printf("%zu\n", strcspn(av[1], av[2]));
}