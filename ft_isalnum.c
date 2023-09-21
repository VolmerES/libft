/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:19:41 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/21 18:10:07 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>
int	main	(void)
{
	int c = '?';
	ft_isalnum(c);
	if (ft_isalnum(c) == 1)
		printf("Si que es alphanum/n");
	else
		printf("No es alphanum/n");
	return (0);
}*/