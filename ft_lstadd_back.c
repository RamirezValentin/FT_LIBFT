#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (lst == NULL || new == NULL) // Check for NULL pointers
        return;

    if (*lst == NULL)
    {
        *lst = new;
        //new->next = NULL; eviter d ajouter cette ligne sinon ca causes des problemes, car si next contient une suite de chaine on casse la chaine 
    }
    else
    {
        t_list *temp = NULL;
        temp = *lst; // Use a temporary pointer to traverse the list
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new; // Properly link the new node at the end of the list
        //new->next = NULL; eviter d ajouter cette ligne sinon ca causes des problemes, car si next contient une suite de chaine on casse la chaine
    }
}






// void ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	if((*lst) == NULL)
// 	{
// 		*lst = new;
// 		new->next = NULL
// 	} else{
// 		while(*lst->next != NULL)
// 		{
// 			*lst = lst->next;
// 		}
// 		*lst->next = new;
// 		*lst = new;
// 	}
// }