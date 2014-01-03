/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctreton <ctreton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 06:08:38 by ctreton           #+#    #+#             */
/*   Updated: 2013/12/29 01:13:48 by ctreton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	res = ft_strnew(ft_strlen(s));
	if (res)
	{
		while (s[i] != '\0')
		{
			res[i] = f(s[i]);
			i++;
		}
	}
	return (res);
}
