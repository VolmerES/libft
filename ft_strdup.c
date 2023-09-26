/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:19:23 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/26 21:04:40 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//calcular la longitud de la str 			OK
//incluir caracter nulo al final			OK
//copiar el contendio de str a una nueva memoria asignada con malloc	OK
//devolver puntero al inicio de la copia	OK
//si la cadena es NULL, devolver NULL 		OK
#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *str)
{
	char *cpy;
	int i;

	i = 0;
	cpy = malloc((ft_strlen((char *)str) + 1) * sizeof(char));
	if(cpy == NULL)
		return(NULL);
	while(str[i] != '\0')
	{	
		cpy[i] = str[i];
		i++;
	}
	cpy[i] =  '\0';
	return(cpy);
}
/*
int	main()
{
	char *ptr = NULL;
	char *f;

	f = ft_strdup(ptr);
	printf("La copia devuelve %s \n", f);
	return(0);
}*/
