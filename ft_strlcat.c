#include "libft.h"

 size_t ft_strlcat(char *dst, const char *src, size_t size){
    size_t j = 0;
    size_t dest_len = 0;
    size_t src_len = 0;


    
    while(dst[dest_len]) dest_len++; 

    while(src[src_len]) src_len++;

    if(size <= dest_len) return size + src_len;
    
    size_t i = dest_len; //On fait ca pour pouvoir return correctement 
    while(src[j] && i < (size - 1)){ //la ca doit etre i et pas j pour la deuxieme condition (i < (size - 1)) , car on ne veut pas spécialement commencer de 0 on veut juste ne pas dépasser la limite de la taille du tampon (buffer donc dst)
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return dest_len + src_len;
 }


// int main(){
//     char buffer[10] = "test";   //size c'est 10 et il y a 5 octect sur les 10 qui sont occupé dans le tabelau
//     char src[4] = "aaa";

//     //avant la fonction
//     printf("buffer before is %s\n", buffer);

//     //fonction
//     printf("function return %ld \n", ft_strlcat(buffer, src, sizeof(buffer)));

//     //après la fonction
//     printf("buffer after is %s\n", buffer);
//     printf("sizeof(buffer) is %ld\n", sizeof(buffer));



//     return 0;
// }