#include "libft.h"

int ft_isascii(int c){
    if(c>=0 && c<=127)
        return 1;
    return 0;
}

// int main(int argc,char **argv){

//     if(argc > 1){
//         int test = argv[1][0];
//         printf("%d \n", ft_isacii(test));
//     } else {
//         printf("error");
//     }
//     return 0;
// }