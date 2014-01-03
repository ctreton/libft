/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctreton <ctreton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:44:38 by ctreton           #+#    #+#             */
/*   Updated: 2013/12/29 01:12:37 by ctreton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char		*res;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	res = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (res)
	{
		while (i < ft_strlen(s1))
			res[j++] = s1[i++];
		i = 0;
		while (i < ft_strlen(s2))
			res[j++] = s2[i++];
		res[j] = '\0';
		return (res);
	}
	else
		return (NULL);
}
