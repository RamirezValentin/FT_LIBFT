#include "libft.h"

char *ft_strdup(const char *s){
int i = 0;
int j = 0;

while(s[i])
    i++;

char *array2 = malloc(sizeof(char) * i + 1);
    if(array2 == NULL)
        return NULL;

while(s[j]){
    array2[j] = s[j];
    j++;
}
array2[j] = '\0';
return array2;
}


// int main(){
//     char *s = "test";
//     char *dup = ft_strdup(s);
//     printf("%s\n", dup);
//     free(dup); // Libérer la mémoire allouée par ft_strdup
//     return 0;
// }