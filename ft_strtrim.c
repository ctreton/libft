/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctreton <ctreton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:09:46 by ctreton           #+#    #+#             */
/*   Updated: 2013/12/29 01:20:16 by ctreton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*res;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s)
		return (NULL);
	j = ft_strlen(s) - 1;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
		i++;
	while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && j > 0)
		j--;
	res = ft_strsub(s, i, (j - i) + 1);
	return (res);
}
