/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:46:52 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/21 20:16:23 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "Holaaa~~:wA";
	int l;

	ft_strlen(str);
	l = ft_strlen(str);
	printf("La longitud de la cadena es %d /n", l);
	return (0);
}*/
