/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctreton <ctreton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:10:18 by ctreton           #+#    #+#             */
/*   Updated: 2013/12/29 01:11:03 by ctreton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strdup(const char *s)
{
	int		i;
	char	*res;

	i = 0;
	res = (char *)malloc(ft_strlen(s) + 1);
	if (res)
	{
		while (s[i] != '\0')
		{
			res[i] = s[i];
			i++;
		}
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
