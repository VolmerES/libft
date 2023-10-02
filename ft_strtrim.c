/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:52:16 by jdelorme          #+#    #+#             */
/*   Updated: 2023/10/02 17:30:33 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//calcular la longitud de la string llamando a mi funcion
//iterar la string principal para encontrar la substr con strchr
//guardar en dos variables el indice
//restar el indice al largo para asignar la memoria necesaria con maloc
//devolver la string sin la parte a recortar de esta
//devolver NULL si falla la reserva malloc
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char 	*ministr;
	size_t	s;
	size_t 	e;
	
	if (!s1 || !set)
		return (NULL);
	s = 0;
	e = ft_strlen(s1);
	while (s1[s] && ft_strchr(set, s1[s]))
		s++;
	while (e > s && ft_strchr(set,  s1[e - 1]))
		e--;
	ministr = ft_substr(s1, s, e - s);
	return (ministr);
}
/*
int	main()
{
	char *cad = "Hola42";
	char *can = "Ho";
	char *f;

	f = ft_strtrim(cad, can);
	printf("Devuelve: |%s| \n", f);
	return (0);
}*/
