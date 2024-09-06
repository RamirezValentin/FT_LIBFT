#include "libft.h"

int ft_atoi(const char *nptr)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
        i++;        
    if(nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            sign = -1;
        i++;
    }
    while(nptr[i] >= '0' && nptr[i] <= '9')
    {
        result = result * 10 + nptr[i] - '0';
        i++;
    }
    return (result * sign);
}

// int main(int argc, char **argv){
//     if(argc > 0){
//         printf("%d \n", ft_atoi(argv[1]));
//     }
//     else {
//         printf("error");
//     }
//     return 0;
// }