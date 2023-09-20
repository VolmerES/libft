/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:11:56 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/20 18:03:55 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*buff1;
	const unsigned char	*buff2;
	int					i;

	buff1 = (const unsigned char *) str1;
	buff2 = (const unsigned char *) str2;
	i = 0;
	while ((buff1[i] || buff2[i]) && (i < n))
	{
		if (buff1[i] != buff2[i])
		{
			return (buff1[i] - buff2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	char cad1[] = "h4ola42";
	char cad2[] = "hola42";
	int f;

	f = ft_memcmp(cad1, cad2, 7);
	printf("%d \n", f);
	return (0);
}*/
