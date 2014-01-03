/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctreton <ctreton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 05:47:52 by ctreton           #+#    #+#             */
/*   Updated: 2013/12/29 01:16:56 by ctreton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*res;

	size++;
	res = (char *)malloc(sizeof(char *) * size);
	if (res)
	{
		ft_memset(res, 0, size);
		return (res);
	}
	else
		return (NULL);
}
