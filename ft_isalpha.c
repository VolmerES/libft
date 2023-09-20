/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:04:06 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/20 13:01:57 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h> 

int	main(void)
{
	int c = '2';
	
	if (ft_isalpha(c))
		printf("Si que es alpha/n");
	else
		printf("No es alpha/n");

	return (0);
}*/
