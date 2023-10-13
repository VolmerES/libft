/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:18:41 by jdelorme          #+#    #+#             */
/*   Updated: 2023/10/13 20:39:50 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*next_list;
	t_list	*new_list;
	void	*value;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		value = f(lst->content);
		next_list = ft_lstnew(value);
		if (!next_list)
		{
			ft_lstclear(&new_list, del);
			del(value);
			return (NULL);
		}
		ft_lstadd_back(&new_list, next_list);
		lst = lst->next;
	}
	return (new_list);
}	
