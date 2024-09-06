#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n){
    unsigned const char *pSRC = src;
    unsigned char *pDEST = dest;
    unsigned int i = 0;

    while(i<n){
        pDEST[i] = pSRC[i];     
        i++;
    }
    return pDEST;
}

// int main(){
//     char buffer[5] = "test";
//     char final[10] = "123456789";
//     ft_memcpy(final, buffer, (sizeof(buffer) - 1)); //-1 pour enlever le '\0' de la fin de la chaine char buffer car sinon ca s'arrete directement là. enxemple : sans le -1 = "test" et avec le -1 = "test56789" 
//     printf("%s \n", final);
//     return 0;
// }