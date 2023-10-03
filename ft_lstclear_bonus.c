/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 20:52:52 by jdelorme          #+#    #+#             */
/*   Updated: 2023/10/03 21:08:18 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	pos;
	t_list	cpos;

	if(!lsti || !*lst)
		return;
	pos = lst->next;
	cpos =pos->content;
	
	while (pos)
	{
		cpos
		del(cpos->content);
		free(cpos);
	}
	**lst = NULL;
}
