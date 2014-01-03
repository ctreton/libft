/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctreton <ctreton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:57:34 by ctreton           #+#    #+#             */
/*   Updated: 2013/12/29 01:00:55 by ctreton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*p;
	unsigned char	*p2;

	i = 0;
	p = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (i < n)
	{
		if (p[i] != p2[i])
			return (p[i] - p2[i]);
		i++;
	}
	return (0);
}
