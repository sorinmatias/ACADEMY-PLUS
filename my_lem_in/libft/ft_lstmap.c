#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*aux;

	aux = f(lst);
	new = aux;
	if (new == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
		aux->next = f(lst);
		if (aux->next == NULL)
			return (NULL);
		aux = aux->next;
	}
	return (new);
}
