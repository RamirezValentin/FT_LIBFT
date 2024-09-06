#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
}




// void ft_lstclear(t_list **lst, void (*del)(void*)) //faux mais c'est ce que j avais fait
// {
// 	while(lst)
// 	{
// 		del(lst->content);
// 		free(lst)
// 		lst = lst->next;
// 	}
// 	lst = NULL;
// }