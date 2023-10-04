/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:25:02 by jdelorme          #+#    #+#             */
/*   Updated: 2023/10/04 20:20:37 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	const char	*cad;
	const char	*subcad;
	size_t		r_len;

	if (*substr == '\0')
		return ((char *) str);
	while (*str != '\0' && len > 0)
	{	
		if (*str == *substr)
		{
			cad = str;
			subcad = substr;
			r_len = len;
			while (*cad == *subcad && *cad != '\0' && r_len > 0)
			{
				cad++;
				subcad++;
				r_len--;
			}
			if (*subcad == '\0')
				return ((char *)str);
		}
		str++;
		len--;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char cad[] = "Hola mundo 42";
	char scad[] = "mundo";
	char *f;

	f = ft_strnstr(cad, scad, 20);
	printf("La subcadena se encuentra de %s \n", f);
	f = strnstr(cad, scad, 20);
	printf("La subcadena se encuentra de %s \n", f);
	return (0);

}*/
