/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctreton <ctreton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 00:35:43 by ctreton           #+#    #+#             */
/*   Updated: 2013/12/29 01:18:02 by ctreton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strrev(char *s)
{
	char	*tmp;
	int		size;
	int		i;
	int		j;

	i = 0;
	size = ft_strlen(s);
	j = size - 1;
	tmp = (char *)malloc(sizeof(char *) * size);
	if (tmp)
	{
		while (i < size)
		{
			tmp[i] = s[j];
			i++;
			j--;
		}
		tmp[i] = '\0';
	}
	return (tmp);
}
