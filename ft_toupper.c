/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:15:39 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/20 17:38:29 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
		return (c);
	}
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	int p;
	int l;

	p = 'l';
	l = ft_toupper(p);
	printf("%c \n", l);

	return (0);
}*/
