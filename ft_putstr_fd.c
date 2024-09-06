#include <unistd.h>
#include "libft.h"

// void ft_putstr_fd(char *s, int fd) 
// {	
// 	if(!s)
// 		return;
// 	while(*s) //déréférence
// 	{
// 		write(fd, s, 1);  //le s est un pointeur vers le premier caractère de la chaine il y a print f qui comprends qu il faut naviguer dedans mais pas write alors on pointe vers le premier charactère et on incrémente
// 		s++;
// 	}
// }


void ft_putstr_fd(char *s, int fd) //meilleure version + opti car sinon write fait a chaque fois des appel système
{
	int i;
	i = 0;
	if(!s)
		return;
	while(s[i])
		i++;
	write(fd, s, i);
}




// int main()
// {
// 	char *str = "Hello, world!";
// 	int fd = 1; // Utilise le descripteur de fichier 1 pour écrire sur la sortie standard (stdout)
	
// 	ft_putstr_fd(str, fd);
	
// 	return 0;
// }
