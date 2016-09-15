#include "libft.h"

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list *aux;

	if (!(aux = (t_list*)malloc(sizeof(*aux) * (content_size))))
		return (NULL);
	if (!content)
	{
		aux->content = NULL;
		aux->content_size = 0;
	}
	else
	{
		aux->content = (void*)malloc(sizeof(content));
		ft_memcpy(aux->content, content, content_size);
		aux->content_size = content_size;
	}
	aux->next = NULL;
	return (aux);
}