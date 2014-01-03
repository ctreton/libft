/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctreton <ctreton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:02:12 by ctreton           #+#    #+#             */
/*   Updated: 2013/12/29 01:00:00 by ctreton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char		*des;
	const char	*src;
	size_t		i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	src = s2;
	des = s1;
	while (i < n)
	{
		*des = *src;
		if (*src == c)
		{
			des++;
			return (des);
		}
		des++;
		src++;
		i++;
	}
	return (NULL);
}
