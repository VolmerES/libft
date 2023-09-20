/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:27:33 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/20 14:57:42 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

void	*ft_memset(void *ptr, int val, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *) ptr;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)val;
		i++;
	}
	return (ptr);
}

/*#include  <stdio.h>
int	main()
{
	char str[8] = "";

	ft_memset(str, 'a', 2);
	printf("%s\n", str);
}*/
