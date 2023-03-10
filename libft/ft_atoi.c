/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kburalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:11:31 by kburalek          #+#    #+#             */
/*   Updated: 2023/02/15 16:11:34 by kburalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	nb;

	i = 0;
	j = 1;
	nb = 0;
	while (str[i] == '\v' || str[i] == '\f' || str[i] == '\n' || str[i]
		== '\r' || str[i] == '\t' || str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j = j * -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * j);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc >= 2)
	{
	    printf("atoi = %d \n", atoi(argv[1]));
        printf("ft_atoi = %d", ft_atoi(argv[1]));
	}
	return (0);
}*/