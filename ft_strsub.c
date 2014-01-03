/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctreton <ctreton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 06:37:21 by ctreton           #+#    #+#             */
/*   Updated: 2013/12/29 01:19:40 by ctreton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	j;

	j = 0;
	if (!s)
		return (NULL);
	res = (char *)malloc(len * sizeof(char *));
	if (res)
	{
		while (j < len)
		{
			res[j] = s[start];
			j++;
			start++;
		}
		res[j] = '\0';
		return (res);
	}
	return (NULL);
}
