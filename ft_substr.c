#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i = 0;

    if(!s)
        return NULL;
    if(start > ft_strlen(s))
        return ft_strdup("");

    if(len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;

    char *newstr = malloc(sizeof(char) * len + 1);
        if(newstr == NULL)
            return NULL;

    ft_bzero(newstr, len);

    while(s[start] && i < len)
    {
        newstr[i] = s[start];
        start++;
        i++;
    }

    newstr[i] = '\0';
    return newstr;
}


// int main(){

//     char *s = "test12345";
//     unsigned int start = 2;
//     size_t len = 3;
//     printf("%s \n", ft_substr(s, start, len));
//     return 0;
// }