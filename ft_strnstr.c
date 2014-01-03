/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctreton <ctreton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 18:27:48 by ctreton           #+#    #+#             */
/*   Updated: 2013/12/29 01:17:14 by ctreton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		s1len;
	size_t		s2len;
	size_t		i;

	i = 0;
	s1len = ft_strlen((char *)s1);
	s2len = ft_strlen((char *)s2);
	if (s2len == 0)
		return ((char *)s1);
	if (s2len > s1len)
		return (NULL);
	if (n > s1len)
		n = s1len;
	while ((i + s2len) <= n)
	{
		if (ft_strncmp(&s1[i], s2, s2len) == 0)
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
