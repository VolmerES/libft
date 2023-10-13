/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mymains.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:14:33 by jdelorme          #+#    #+#             */
/*   Updated: 2023/10/09 17:47:49 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

#define RED_TEXT "\033[31m"
#define GREEN_TEXT "\033[32m"
#define RESET_COLOR "\033[0m"
#define NUM 10

int	main(int argc, char **argv)
{
	int num = NUM;
	if (argc != 3)
	{
		printf("%s\n", "argumento inválido");
		return (1);
	}

	char *argumento = argv[1];
	char *argumento2 = argv[2];

	if (strcmp(argumento, "ft_isalpha.c") == 0)
	{
		int c = argumento2[0];
	
		if (ft_isalpha(c))
			printf(GREEN_TEXT "✔✔Si es alpha✔✔\n" RESET_COLOR);
		else
			printf(RED_TEXT "✗✗No es alpha✗✗\n" RESET_COLOR);
	
	}
	if (strcmp(argumento, "ft_isdigit.c") == 0)
    {
        int c = argumento2[0];
		if (ft_isdigit(c) == 1)
			printf(GREEN_TEXT "Si es un digito\n" RESET_COLOR);
		else
			printf(RED_TEXT "No es un digito\n" RESET_COLOR);
	}
	if (strcmp(argumento, "ft_isalnum.c") == 0)
	{
        int c = argumento2[0];
		if (ft_isalnum(c) == 1)
        	printf(GREEN_TEXT "Si que es alphanum\n" RESET_COLOR);
    	else
        	printf(RED_TEXT "No es alphanum\n" RESET_COLOR);
	}
	if (strcmp(argumento, "ft_isascii.c") == 0)
	{
		int c = argumento2[0];
		if (ft_isascii(c) == 1)
			printf(GREEN_TEXT "Si es ascii \n" RESET_COLOR);
		else
			printf(RED_TEXT "No es ascii \n" RESET_COLOR);
	}
	if (strcmp(argumento, "ft_strlen.c") == 0)
	{
		int i = 0;
		const char *str = &argumento2[i++];
		int l;

		l = ft_strlen(str);
			printf(GREEN_TEXT "Longitud de la cadena %d \n", l);
	} 
	if (strcmp(argumento, "ft_memset.c") == 0)
	{
		int i = 0;
		char *str = &argumento2[i++];
		ft_memset(str, 'a', 4);
		printf(GREEN_TEXT "%s \n", str);
	}
	if (strcmp(argumento, "ft_bzero.c") == 0)
	{
		int i = 0;
		char *str = &argumento2[i++];
		ft_bzero(str, 4);
		printf(GREEN_TEXT "%s \n", str);
	}
	if (strcmp(argumento, "ft_memcpy.c") == 0)
	{
		int i = 0;
		char *src = &argumento2[i];
		char dest[num];
		ft_memcpy(dest, src, 10);
		while (i < num && dest[i] != '\0' && src[i] != '\0')
		{
			printf(GREEN_TEXT "%c", dest[i]);
			i++;
		}
	}
	if (strcmp(argumento, "ft_memmove.c") == 0)
	{
		char dest[num];
		int i = 0;
		char *fuente = &argumento2[i];
		size_t len = 10;
		char *f = ft_memmove(dest, fuente, len);
		while (i < len && dest[i] != '\0' && fuente[i] != '\0')
		{
			printf(GREEN_TEXT "%c", dest[i]);
			i++;
		}
	}
	if (strcmp(argumento, "ft_strlcpy.c") == 0)
	{
		int i = 0;
		char des[num];
		char *src = &argumento2[i];
		ft_strlcpy(des, src, num);
		printf(GREEN_TEXT "%s", des);
	}
	if (strcmp(argumento, "ft_strlcat.c") == 0)
	{
		int i = 0;
		char *src = "42";
		char *des = &argumento2[i];
		ft_strlcat(des, src, num);
		printf(GREEN_TEXT "%s", des);
	}
	if (strcmp(argumento, "ft_toupper.c") == 0)
	{
		int c = argumento2[0];
		int f = ft_toupper(c);
		printf(GREEN_TEXT "%c \n", f);
	}
	if (strcmp(argumento, "ft_tolower.c") == 0)
	{
		int c = argumento2[0];
		int f = ft_tolower(c);
		printf(GREEN_TEXT "%c \n", f);
	}
	if (strcmp(argumento, "ft_strchr.c") == 0)
	{
		char *cad = &argumento2[0];
		char *f = ft_strchr(cad, 'a');
		printf(GREEN_TEXT "%s \n", f);
	}
	if (strcmp(argumento, "ft_strrchr.c") == 0)
	{
		char *cad = &argumento2[0];
		char *f = ft_strrchr(cad, 'a');
		printf(GREEN_TEXT "%s \n", f);
	}

	

	return (0);
}
