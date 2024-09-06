#include "libft.h"
#include <stdio.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t    i;
    unsigned const char    *pS1 = s1;
    unsigned const char    *pS2 = s2;

    i = 0;
    while(i < n)
    {
            if(pS1[i] != pS2[i])
                return (pS1[i] - pS2[i]);
        i++;
    }
    return (0);
}

// int main(int argc, char **argv){
//     if(argc > 3){
//         size_t n = atoi(argv[3]);
//         printf("%d \n", ft_memcmp(argv[1], argv[2], n));
//     } else {
//         printf("error");
//     }
//     return 0;
// }