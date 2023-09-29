/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:21:15 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/29 15:32:46 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{	
		while (i < dstsize - 1 && src[i] != '\0')
		{	
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main()
{
	char	des[] = "ola";
	char	src[] = "Hola 42";
	int	f;

	f = ft_strlcpy(des, src, 8);
	printf("%s \n", des);
	return (0);
}*/
