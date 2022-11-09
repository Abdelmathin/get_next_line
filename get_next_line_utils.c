/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <ahabachi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:44:39 by ahabachi          #+#    #+#             */
/*   Updated: 2022/10/11 13:44:48 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "get_next_line.h"

void	ft_bzero(void *s, size_t n)
{
	while (0 < n--)
		((char *)s)[n] = 0;
}

size_t	ft_strlen(const char *s)
{
	if (*s)
		return (1 + ft_strlen(s + 1));
	return (0);
}

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = (s1 > s2) * (n - 1);
	while (n > 0 && s1 != s2 && i < n)
	{
		((char *)s1)[i] = ((char *)s2)[i];
		i += (s1 < s2) - (s1 > s2);
	}
	return (s1);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	res = malloc(count * size);
	if (res)
		ft_bzero(res, count * size);
	return (res);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	slen;

	slen = ft_strlen(s);
	dup = ft_calloc(slen, sizeof(char));
	if (dup)
		ft_memmove(dup, s, slen);
	return (dup);
}
