// 1. Copie jusqu'à size - 1 caractères de la chaîne src vers dst.

// 2. Termine la chaîne de destination avec un caractère nul (\0), si size est supérieur à 0.

// 3. Renvoie la longueur de la chaîne source src, ce qui permet de détecter si la chaîne a été tronquée. 
//        Si la valeur renvoyée est supérieure ou égale à size, cela signifie que la chaîne a été tronquée.


#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size){  //buffer c'est tampon et c'est la ou on va mettre quelque chose en l'occurence c'est dst. et size c'est la taille de dst en octect et 1 octect = un caractère ascii
    size_t i = 0;

    if(size == 0)
    {
        while(src[i])
            i++;
        return (i);
    }
    if(size > 0)
    {
    while(i < (size - 1) && src[i] != '\0'){   
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    }
    while(src[i] != '\0')
        i++;
    return i;
}

// int main(int argc, char **argv){
//     if(argc > 2){
//         char *buffer = malloc(strlen(argv[2]) + 1); // Allouer suffisamment de mémoire pour copier argv[2]
//         if (buffer == NULL) {
//             printf("Allocation failed\n");
//             return 1;
//         }
//         printf("%ld \n", ft_strlcpy(buffer, argv[2], strlen(argv[2]) + 1));
//         printf("size of buffer is %ld \n", strlen(buffer));

//         free(buffer); // Libérer la mémoire allouée
//     } else {
//         printf("error");
//     }
//     return 0;
// }