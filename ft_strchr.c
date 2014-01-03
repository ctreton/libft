/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctreton <ctreton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 00:05:06 by ctreton           #+#    #+#             */
/*   Updated: 2013/12/29 01:08:50 by ctreton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	*res;

	res = (char *)s;
	while (*res != '\0')
	{
		if (*res == c)
			return (res);
		res++;
	}
	if (*res == c)
		return (res);
	return (NULL);
}
