/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctreton <ctreton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 22:22:11 by ctreton           #+#    #+#             */
/*   Updated: 2013/12/29 00:59:00 by ctreton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char				*ft_itoa(int n)
{
	char			*res;
	int				neg;
	int				i;
	unsigned int	tmp;

	i = 0;
	neg = 0;
	if (n < 0)
		neg = 1;
	tmp = (neg ? -(unsigned int)n : (unsigned int)n);
	res = (char*)malloc(sizeof(char*) * 12);
	if (!res)
		return (NULL);
	if (tmp == 0)
		res[i++] = '0';
	while (tmp != 0)
	{
		res[i++] = (tmp % 10) + 48;
		tmp = tmp / 10;
	}
	if (neg)
		res[i++] = '-';
	res[i] = '\0';
	return (ft_strrev(res));
}
