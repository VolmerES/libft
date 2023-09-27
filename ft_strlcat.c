/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:22:16 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/27 20:35:35 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < dstsize - 1 && src[i] != '\0')
	{
		while (dest[i] != '\0')
		{
			i++;
		}
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';;
	return (ft_strlen((char *)src + dstsize));
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
