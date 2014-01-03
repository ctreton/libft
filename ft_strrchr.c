/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctreton <ctreton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 01:01:27 by ctreton           #+#    #+#             */
/*   Updated: 2013/12/29 01:17:31 by ctreton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = ft_strlen(s);
	res = (char *)s;
	while (*res != '\0')
		res++;
	while (i > 0)
	{
		if (*res == c)
			return (res);
		i--;
		res--;
	}
	if (*res == c)
		return (res);
	return (NULL);
}
