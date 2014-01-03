/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctreton <ctreton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 06:31:44 by ctreton           #+#    #+#             */
/*   Updated: 2013/12/29 01:16:30 by ctreton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strnequ(char const *s1, char const *s2, size_t size)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2 || !size)
		return (0);
	while (*s1++ == *s2++ && i < size)
		i++;
	if (i == size)
		return (1);
	else
		return (0);
}
