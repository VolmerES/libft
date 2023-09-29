/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:52:16 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/29 21:13:48 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//declarar dos interadores
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *ministr;
	char *rec;
	int i;
	int j;

	while (s1 != '\0')
	{	
		while (s1 == set)
		{
			j++;
		}
	i++;
	}
		
}

int	main()
{
	char *cad = "Hola 42";
	char *can = "la";

	f = ft_strtrim(cad, can);
	printf("Devuelve: %s \n", f);
	return (0);
}
