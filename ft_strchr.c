/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:58:03 by jdelorme          #+#    #+#             */
/*   Updated: 2023/10/02 14:48:48 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*s;

	s = (char *)str;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return (&s[i]);
		}
		i++;
	}
	if ((char)c == '\0')
		return (&s[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char cad[] = "Hola 42";
	char *f;
	int a;
	
	a = 'a';
	f = ft_strchr(cad, a);
	printf("La letra esta en la posicion %p %p %zu \n", cad, (void *)f, f - cad);
	f = strchr(cad, a);
	printf("La letra esta en la posicion %p %p %zu \n",  cad, f, f - cad);
	return (0);

}*/
