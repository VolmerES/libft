/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:23:16 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/29 18:34:33 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//declarar una variable para almacenar la string							OK
//comprabar que no sea null													OK
//si la longitud de la string es menor que start, len = 0
//si la la strlen(start+string) < len, copiar en len = lstring(s + start)
//llamar a malloc, asignandoselo a mi substr
//si substr = NULL
//ft_strlcpy (substtr, s +star, len + 1)
//retornar substr

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start && ft_strlen(s) == 0)
		len = 0;
	if (ft_strlen(start + s) < len)
		len = ft_strlen(s + start);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	else
		ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
/*
int	main()
{
	char *cad = "hola";
	long	inicio = 4294967295;
	size_t l = 0;
	char *f;

	f = ft_substr(cad, inicio, l);
	printf("Substr: %s \n", f);
	return (0);
}*/
