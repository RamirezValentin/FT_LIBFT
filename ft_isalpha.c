#include "libft.h"

int ft_isalpha(int c){
    if((c >='A' && c <='Z')||(c>='a' && c<='z'))
        return (1);
    return (0);
 }


// int main(int argc, char **argv){

//     if(argc > 1){
//     int test = argv[1][0];             //[1][0] pour prendre le premier argument puis le premier caractere de cet argument
//     printf("%d \n", ft_isalpha(test));
//     } else {
//         printf("error");
//     }
//     return 0;
// }



