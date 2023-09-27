/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:35:00 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/27 11:07:06 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	r;
	int	n;

	r = 0;
	n = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		n *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		r = r * 10 + *str - '0';
		str++;
	}
	return (r * n);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main()
{
	int fake;
	int org;

	fake = ft_atoi("-21474836648");
	org = atoi("-21474836648");
	printf("Original: %d || Fake: %d \n", org, fake);
	return(0);
}*/
