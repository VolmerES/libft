/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 21:06:38 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/27 10:56:28 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*	
#include <fcntl.h>
int	main()
{
 	int fd = open("hola.txt", O_RDWR | O_CREAT);
	int a = 'a';
	printf("%d \n", fd);
	ft_putchar_fd(a, fd);


	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			dprintf(1, "normal\n");
		else
			dprintf(2, "error\n");
	}
	return(0);
} */
