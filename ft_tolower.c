#include "libft.h"

int ft_tolower(int c){
   if(c>='A' && c<='Z')
        c = c + 32;
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