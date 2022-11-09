/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabachi <ahabachi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:06:19 by ahabachi          #+#    #+#             */
/*   Updated: 2022/10/11 13:24:34 by ahabachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stddef.h>
# include <limits.h>

# define FT_GNL_MAX OPEN_MAX

char	*get_next_line(int fd);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *s);
void	*ft_memmove(void *s1, const void *s2, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s);

#endif//GET_NEXT_LINE_BONUS_H
