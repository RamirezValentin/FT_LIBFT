#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if(lst == NULL)
		return NULL;
	while(lst->next != NULL) //tant que le next de l'element ne donne pas sur rien
	{
		lst = lst->next;
	}
	return(lst);
}