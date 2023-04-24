/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kburalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:34:50 by kburalek          #+#    #+#             */
/*   Updated: 2023/04/21 15:34:52 by kburalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int	num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		len = 1;
		num = -num;
	while (num > 0) 
	{
        num = num / 10;
		len++;
	}
	return (len);
}
char	*ft_itoa(int num)
{
	char	*str;
	int	len;

	len = ft_count(num);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (num < 0)
		str[0] = '-';
		num = num * -1;
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	str[len] = '\0';
	return (str);
}
