/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:21:15 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/13 17:39:41 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlcpy(char * restrict dest, const char * restrict src, size_t dstsize)
{
	size_t i;

	i = 0;
	while (i < dstsize)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

int	main()
{
	char	des[] = "ola";
	char	src[] = "Hola 42";
	int	f;

	f = ft_strlcpy(des, src, 8);
	printf("%s \n", des);
	return (0);
}
