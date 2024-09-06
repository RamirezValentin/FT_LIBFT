#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *)) // Définition de la fonction.
{
    t_list	*new_lst; // Pointeur vers la nouvelle liste résultante.
    t_list	*new_elem; // Pointeur vers le nouvel élément à ajouter à la nouvelle liste.
    void	*content; // Pointeur vers le contenu traité de l'élément actuel.

    new_lst = NULL; // Initialise la nouvelle liste à NULL.
    if (!f || !lst || !del) // Vérifie si la fonction, la liste ou la fonction de suppression sont NULL.
        return (NULL); // Si oui, retourne NULL.
    while (lst != NULL) // Boucle à travers chaque élément de la liste donnée.
    {
        content = f(lst->content); // Applique la fonction `f` au contenu de l'élément actuel et stocke le résultat.
        new_elem = ft_lstnew(content); // Crée un nouvel élément de liste avec le contenu traité.
        if (new_elem == NULL) // Vérifie si la création du nouvel élément a échoué.
        {
            del(content); // Supprime le contenu traité pour éviter les fuites de mémoire.
            ft_lstclear(&new_lst, del); // Supprime toute la nouvelle liste pour éviter les fuites de mémoire.
            return (NULL); // Retourne NULL pour indiquer l'échec.
        }
        ft_lstadd_back(&new_lst, new_elem); // Ajoute le nouvel élément à la fin de la nouvelle liste.
        lst = lst->next; // Passe à l'élément suivant de la liste donnée.
    }
    return (new_lst); // Retourne la nouvelle liste après avoir appliqué la fonction à chaque élément.
}