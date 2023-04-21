/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kburalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:49:45 by kburalek          #+#    #+#             */
/*   Updated: 2023/04/21 14:49:47 by kburalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_substr(char const *str, unsigned int start, size_t num)
{
	char	*sub;
	size_t	i;

	i = 0;
	//if (start >= ft_strlen(str))
	//	return(str);
	sub = (char *)malloc(sizeof(char) *(num + 1));
	if (sub == NULL)
		return (NULL);
	while (i < num)
	{
		sub[i] = str[start];
		i++;
		start++;
	}
	sub[num] = '\0';
	return (sub);
}
