/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:25:02 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/27 17:00:40 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	const char	*cad;
	const char	*subcad;

	if (*substr != NULL)
	{
		while (*str != '\0' && len > 0)
		{	
			cad = str;
			subcad = substr;
			while (*cad == *subcad && cad != '\0' && len > 0)
			{
				cad++;
				subcad++;
				len--;
			}
			if (*subcad == '\0')
				return ((char *) str);
		str++;
		len--;
		}
	}
	return (NULL);
}

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

}
