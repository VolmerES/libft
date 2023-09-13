/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:27:33 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/12 17:15:31 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdio.h>

void	*ft_memset (void *ptr, int val, size_t len)
{
	int i;
	unsigned char *p = ptr;

	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)val;
		i++;
		len--;
	}
	return (ptr);
}

int	main()
{
	char str[] = "Hola";

	ft_memset(str, 'a', 5);
	printf("%s\n", str);
}
