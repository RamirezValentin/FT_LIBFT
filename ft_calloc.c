#include "libft.h"



void *ft_calloc(size_t nmemb, size_t size){

    if(size != 0 && nmemb * size / size != nmemb)
        return NULL;

    void *array = (void *)malloc(nmemb * size);
    if(array == NULL)
        return NULL;

    ft_bzero(array, (nmemb * size));

    return array;
}














// void *ft_calloc(size_t nmemb, size_t size){
//     size_t i = 0;

//     if(nmemb == 0 || size == 0 || nmemb > (nmemb * size)/size)
//         return NULL;

//     char *array = malloc(nmemb * size);
//     if(array == NULL)
//         return NULL;

//     while(i < nmemb * size){ // Explication de while (i < nmemb * size) Initialisation à zéro: nmemb est le nombre d'éléments. size est la taille de chaque élément en octets. nmemb * size donne le nombre total d'octets à initialiser. Boucle de Zéro-initialisation:La boucle while (i < nmemb * size) itère sur chaque octet de la mémoire allouée, en l'initialisant à zéro.
//         array[i] = '\0';
//         i++;
//     }

//     return array;
// }

// int main() {
//     // Test ft_calloc
//     int *ptr = ft_calloc(5, sizeof(int));
//     if (ptr != NULL) {
//         int i = 0;
//         while (i < 5) {
//             printf("%d ", ptr[i]);
//             i++;
//         }
//         printf("\n");
//         free(ptr);
//     }
    
//     return 0;
// }





// copilote : 
// #include <stdlib.h>
// #include <string.h>

// void *ft_calloc(size_t nmemb, size_t size) {
//     // Vérification préalable de nmemb et size
//     if (nmemb == 0 || size == 0) {
//         return NULL;
//     }

//     // Vérification du débordement d'entier
//     if (nmemb > SIZE_MAX / size) {
//         return NULL;
//     }

//     size_t totalSize = nmemb * size;
//     char *array = malloc(totalSize);
//     if (array == NULL) {
//         return NULL;
//     }

//     // Initialisation de la mémoire à zéro
//     memset(array, 0, totalSize);

//     return array;
// }