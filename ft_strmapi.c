#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	ft_bzero(str, ft_strlen(s) + 1);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

// char (*f)(unsigned int, char) : Le deuxième paramètre est un pointeur vers une fonction, f. Cette fonction pointée doit avoir la signature suivante :
// Elle doit retourner un char.
// Elle prend deux paramètres : un unsigned int et un char.
