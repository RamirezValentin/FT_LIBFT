#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    int len;
    int i;
    i = 0;

    if(!s1 || !s2)
        return NULL;
    len = ft_strlen(s1) + ft_strlen(s2);

    char *sjoin = malloc(sizeof(char) * (len) + 1);
    if(sjoin == NULL)
        return NULL;
    ft_bzero(sjoin, len+1);
    while(*s1)
    {
        sjoin[i] = *s1;
        s1++;
        i++;
    }
    while(*s2)
    {
        sjoin[i] = *s2;
        s2++;
        i++;
    }
    return sjoin;
} 

// int main(){
//     char *s1= "test";
//     char *s2 = "test";

//     printf("%s \n", ft_strjoin(s1,s2));

//     return 0;
// }
