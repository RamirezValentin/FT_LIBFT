#include "libft.h"

char *ft_strrchr(const char *s, int c){
    int i = 0;
    unsigned char uc = (unsigned char) c;

    while(s[i])
        i++;
    
    if(c=='\0')
        return (char *) &s[i];

    while(i>=0){
        if(s[i] == uc)
            return (char *) &s[i];
        i--;
    }

    return NULL;
}

// int main(int argc, char **argv){
//     if(argc > 2){
//         int final = argv[2][0];                         //ca fonctionne aussi de directement mettre argv[2][0] dans la fonction
//         printf("%s \n",ft_strrchr(argv[1], final));
//     } else {
//         printf("error");
//     }
//     return 0;
// }