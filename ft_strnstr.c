#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len){

size_t i = 0;
size_t j = 0;
size_t k = 0;

if (little[0] == '\0')
    return (char *)big;

while(i < len && big[i]){
    j = 0;
    if(big[i] == little[j]){
        k = i;
        while(little[j] != '\0' && big[k] == little[j] && k < len){
            k++;
            j++;
        }
        if (little[j] == '\0') 
            return (char *)&big[i];     //regarder strchr (pas strrchr) si je me souviens plus de pourquoi on cast comme ca
    }

    i++;
}
    return NULL;
}


// int main(int argc, char **argv){
//     if(argc > 3){
//         size_t n = atoi(argv[3]);
//         printf("%s \n", ft_strnstr(argv[1], argv[2], n));
//     }else{
//         printf("error");
//     }
//     return 0;
// }