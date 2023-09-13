/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:47:56 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/12 14:25:58 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t len)
{
	char *str;
	size_t i;

	i = 0;
	str = (char *)s;
	while (i < len)
	{
		str[i] = '0';
		i++;
	}
}

int	main()
{
	char cad[] = "Hola";
	int i;

	printf("%s\n", cad);
	ft_bzero(cad, 1);
	printf("%s\n", cad);
	return (0);	
}
