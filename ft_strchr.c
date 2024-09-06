#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    unsigned char uc = (unsigned char) c;  // on le fait devenir un unsigned char (char et pas int car c'est + opti et char permet de représenter tous les charactere) et unsigned pour gerer les negatif

    while(s[i]){
        if(s[i] == uc)
            return (char *)&s[i];  //cast pour que ca devinne un pointeur. et regarder la photo pour comprendre pourquoi c'est &s[i]. et char * car c'est ce que la fonction nous demande de routrner
        i++;
    }

    if(s[i] == uc){                //pour que ca fonctionnne aussi avec '\0' (nommé aussi null byte ou the terminator)
        return (char *)&s[i];
    }

    return NULL;                  // si ca ne trouve rien ca retourn NULL
}

// int main(int argc, char **argv){

//     if(argc > 2){
//         int final =  argv[2][0];
//         printf("%s \n", ft_strchr(argv[1],final));
//     } else {
//         printf("error");
//     }
//     return 0;
// }