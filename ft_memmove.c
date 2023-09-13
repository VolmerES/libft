/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:28:16 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/12 18:59:26 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;

	if (s < d && s + num > d)
	{
		d += num;
		s += num;
			while (num--)
			{
				*d++ = *s++;
			}
	}
	else
	{
		while (num--)
		{
			*d++ = *s++;
		}
	}
	return (dest);
}

int	main(void)
{
	char destino[20];
	char fuente[] = "Hola Mundo";
	size_t longitud;

	ft_memmove(destino, fuente, longitud);
	printf("%s \n", destino);

	return (0);
}
