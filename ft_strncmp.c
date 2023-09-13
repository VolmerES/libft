/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:27:04 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/13 12:08:17 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp (const char *str1, const char *str2, size_t n)
{
	int i;

	i = 0;
	while ((str1[i] || str2[i]) && (i < n))
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

int	main()
{
	char cad1[] = "hola 42";
	char cad2[] = "hol 42";
	int val;

	val = ft_strncmp(cad1, cad2, 3);
	printf("El valor de retorno es %d \n", val);
	return (0);
}
