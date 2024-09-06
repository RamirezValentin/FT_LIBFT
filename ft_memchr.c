#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n){
    unsigned const char *pS = s;
    size_t i = 0;

    while(i<n){
        if(pS[i] == (unsigned char)c)
            return (void *)&pS[i];
        i++;
    }
return NULL;
}

// int main(int argc, char **argv){
//     if(argc > 3){
//         size_t n = atoi(argv[3]);
//         const char *result = ft_memchr(argv[1], argv[2][0], n);
//         if (result) {
//             printf("character '%c' trouvé dans \"%s\"\n", argv[2][0], argv[1]);
//         } else {
//             printf("Character '%c' pas trouvé dans les premiers %zu bytes de \"%s\"\n", argv[2][0], n, argv[1]);
//         }
//     } else {
//         printf("Error");
//     }

//     return 0;
// }