/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:15:37 by jdelorme          #+#    #+#             */
/*   Updated: 2023/09/21 12:27:38 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
int	ft_isacii(int c);
int	ft_isalnum(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_strlen(char *str);
int	ft_memcmp(const void *str1, const void *str2, size_t n);
int	ft_strncmp(const char *str1, const char *str2, size_t n);
void	ft_bzero(void *s, size_t len);
void	*ft_memset(void *ptr, int val, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t num);
void	*ft_memcpy(void *destination, const void *source, size_t num);
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
#endif
