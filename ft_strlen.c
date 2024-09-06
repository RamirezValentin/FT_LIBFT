//Signé vs non signé : int est un type de données signé, ce qui signifie qu'il peut représenter à la fois des nombres positifs et négatifs. size_t, en revanche, est un type de données non signé, ce qui signifie qu'il ne peut représenter que des nombres positifs. et size_t fait suivant les syteme soit la meme taille que le int soit est plus grand 
#include "libft.h"

size_t ft_strlen(const char *s){
    size_t i;
    i = 0;

    while(s[i])
        i++;
return i;
}

// int main(int argc, char **argv){
//     if(argc > 1){
//         printf("%ld \n", ft_strlen(argv[1]));
//     } else {
//         printf("eror");
//     }

//     return 0;
// }