/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:06:44 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/11 16:45:38 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int	main	(void)
{
	int c = "h";
	
	ft_isprint(c)
	if (ft_isprint(c) == 1)
		printf("Si que es imprimible/n");
	else
		printf("No es imprimible/n");
	return (0);
}
