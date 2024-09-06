#include "libft.h"

 int ft_strncmp(const char *s1, const char *s2, size_t n){
    size_t i = 0;

while(i<n){
    if(s1[i] != s2[i]){
        return (unsigned char)s1[i] - (unsigned char)s2[i];
    }
    i++;
    } 
return 0;
}


// int main(int argc, char **argv){
//     if(argc > 3){
//         size_t n = atoi(argv[3]);
//         printf("ft_strncmp: %d \n", ft_strncmp(argv[1], argv[2], n));
//         printf("strncmp: %d \n", strncmp(argv[1], argv[2], n)); // Compare using the real strncmp
//     }else{
//         printf("error"); // Typo corrected
//     }
//     return 0;
// }