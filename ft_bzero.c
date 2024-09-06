#include "libft.h"

void ft_bzero(void *s, size_t n){
    unsigned char *p = s;
    unsigned char c = '\0';
    unsigned i = 0;

    while(i<n){
        p[i]=c;
        i++;
    }
}

// int main(){
//     char buffer[50];
//     ft_bzero(buffer, sizeof(buffer));
//     printf("%s \n", buffer);
//     return 0;
// }