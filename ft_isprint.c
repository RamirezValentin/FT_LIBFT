#include "libft.h"

int ft_isprint(int c){
    if(c>=32 && c<=126)
        return 1;
    return 0;
}

// int main(int argc, char **argv){
//     if(argc > 1){
//         int test = argv[1][0];
//         printf("%d \n", ft_isprint(test));
//     } else {
//         printf("error");
//     }
//     return 0;
// }