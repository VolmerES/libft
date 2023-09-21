/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:25:02 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/21 21:52:45 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	if (substr == '\0')
	{
		while (*str != '\0' && len > 0)
		{	
			const char *cad;
			const char *subcad;
			cad = str;
			subcad = substr;
			while (*cad == *subcad && cad != '\0' && len > 0)
			{
				cad++;
				subcad++;
				len--;
			}
		if (*subcad == '\0')
			return((char *) str);
		str++;
		len--;
		}
	}
	return (NULL);
}
