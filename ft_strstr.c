/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctreton <ctreton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 01:08:01 by ctreton           #+#    #+#             */
/*   Updated: 2013/12/29 01:18:41 by ctreton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	char	*tmp1;
	char	*tmp2;
	int		len;

	tmp1 = (char *)s1;
	tmp2 = (char *)s2;
	len = ft_strlen(tmp2);
	while (*tmp1 != '\0')
	{
		if (ft_strncmp(tmp1, tmp2, len) == 0)
			return (tmp1);
		tmp1++;
	}
	return (NULL);
}
