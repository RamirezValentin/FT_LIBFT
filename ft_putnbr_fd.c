#include <unistd.h>
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	int i = 0;
	char *n1 = ft_itoa(n);

	if(!n1)
		return;
	while(n1[i])
		i++;
	write(fd, n1, i);
	free(n1);
}