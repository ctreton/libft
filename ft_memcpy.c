/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctreton <ctreton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:29:05 by ctreton           #+#    #+#             */
/*   Updated: 2013/12/29 01:01:12 by ctreton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t		i;
	char		*des;
	const char	*src;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	des = (char *)s1;
	src = (const char *)s2;
	while (i < n)
	{
		*des = *src;
		des++;
		src++;
		i++;
	}
	return (s1);
}
