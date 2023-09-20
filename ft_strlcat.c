/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:22:16 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/20 17:37:13 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= dstsize)
	{
		while (dest[i] != '\0')
		{
			i++;
		}
		dest[i] = src [j];
		i++;
		j++;
	}
	return (0);
}
/*
int	main()
{
	char	des[] = "Hola";
	char	fue[] = "42";
	int	f;

	f = ft_strlcat(des, fue, 7);
	printf("%s \n", des);
	return (0);
}*/
