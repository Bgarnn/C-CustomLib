/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kburalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:33:01 by kburalek          #+#    #+#             */
/*   Updated: 2023/02/15 15:33:04 by kburalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				a;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			a = s1[i] - s2[i];
			return (a);
		}
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "AbEfgc";
	s2 = "Abd";

	printf("strncmp = %d \n", strncmp(s1, s2, 4));
	printf("ft_strncmp = %d", ft_strncmp(s1, s2, 4));
}*/
