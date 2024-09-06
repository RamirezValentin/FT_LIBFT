#include "libft.h"

int ft_toupper(int c){
   if(c>='a' && c<='z')
        c = c - 32;
return c;
}

// int main(int argc, char **argv){

//     if(argc > 1){
//         int final = argv[1][0];
//         printf("%c \n", ft_toupper(final));
//     } else {
//         printf("error");
//     }

// }