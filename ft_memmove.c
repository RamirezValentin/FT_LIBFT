#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *pSRC = (unsigned char *)src;
    unsigned char *pDEST = (unsigned char *)dest;
    unsigned int i = 0;

    if (pSRC == pDEST || n == 0)
        return (dest);

    if (pDEST < pSRC)
    {
        while (i < n)
        {
            pDEST[i] = pSRC[i];
            i++;
        }
    }
    else
    {
        i = n;
        while (i > 0)
        {
            i--;
            pDEST[i] = pSRC[i];
        }
    }

    return (dest);
}

// int main(){
//     char final[11] = "1234567890";
//     ft_memmove(&final[5], &final[0], 5);
//     printf("%s \n", final);

//     char original[11] = "1234567890";
//     memmove(&original[5], &original[0], 5);
//     printf("%s \n", original);

//     return 0;
// }