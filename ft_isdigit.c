#include "libft.h"

int ft_isdigit(int c){
    if(c>='0' && c<='9')  //pas possible d'utiliser les valeurs normales car quand tu met un truc dans du c, c'est toujours considérer comme un charactère de base, si tu voulais un chiffre il fallait le atoi
        return 1;
    return 0;
}

// int main(int argc, char **argv){

//     if(argc > 1){
//         int test = argv[1][0];
//         printf("%d\n", ft_isdigit(test));
//     }
//     else
//         printf("error");

//     return 0;
// }