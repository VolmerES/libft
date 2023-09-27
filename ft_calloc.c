/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:02:21 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/27 11:11:06 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	*ft_calloc(size_t numelem, size_t sizeelem)
{
	int	*ptr;

	ptr = malloc(numelem * sizeelem);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, numelem * sizeelem);
	return (ptr);
}

/*int	main()
{
	char *p;
	p = ft_calloc(20, 2);
	write(1, p, 40);
	write(1, "\n", 1);
	return(0);
}*/
