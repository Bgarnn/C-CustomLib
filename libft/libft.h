/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kburalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:03:46 by kburalek          #+#    #+#             */
/*   Updated: 2023/02/22 13:03:52 by kburalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int val, size_t num);
void	ft_bzero(void *str, size_t num);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t num);
void	*ft_memchr(const void *str, int val, size_t num);
int		ft_memcmp(const void *s1, const void *s2, size_t num);
char	*ft_strchr(const char *str, int val);
int		ft_strncmp(const char *str1, const char *str2, size_t num);
char	*ft_substr(char const *str, unsigned int start, size_t len);
#endif
