/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctreton <ctreton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 23:44:07 by ctreton           #+#    #+#             */
/*   Updated: 2013/12/29 01:12:56 by ctreton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	srclen;
	size_t	destlen;
	size_t	res;
	size_t	tmp;

	srclen = ft_strlen(src);
	destlen = ft_strlen((const char *)dest);
	res = srclen + destlen;
	tmp = srclen - (res - (n - 1));
	if (n <= destlen)
		return (n + srclen);
	if (res < n)
		ft_strcat(dest, src);
	else
		ft_strncat(dest, src, tmp);
	return (res);
}
