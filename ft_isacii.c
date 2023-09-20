/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isacii.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:40:03 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/20 13:49:22 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main	(void)
{
	long c = '~';

	ft_isascii(c);
	if (ft_isascii(c) == 1)
		printf("Si que es ascii /n");
	else
		printf("No es ascii /n");
	return (0);	
}*/
