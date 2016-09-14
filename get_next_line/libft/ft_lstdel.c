
#include "libft.h"

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *aux;

	while (*alst != NULL)
	{
		aux = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = aux;
	}
}