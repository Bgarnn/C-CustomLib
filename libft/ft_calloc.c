/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kburalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:45:07 by kburalek          #+#    #+#             */
/*   Updated: 2023/04/21 15:31:51 by kburalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(num * size);
	if (num == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	if (ptr != NULL)
	{
		ft_bzero(ptr, num * size);
		return (ptr);
	}
	return (NULL);
}
