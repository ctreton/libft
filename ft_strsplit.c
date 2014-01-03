/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctreton <ctreton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 03:00:59 by ctreton           #+#    #+#             */
/*   Updated: 2013/12/29 21:50:55 by ctreton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_length(char const *s, char c)
{
	int			j;
	int			max;

	if (ft_strlen(s) == 0)
		return (0);
	j = 0;
	max = 0;
	while (s[j] != '\0')
	{
		if (s[j] == c && s[j - 1] != c)
			max++;
		j++;
	}
	if (s[0] == c && s[j - 1] == c)
		max--;
	if (s[0] != c && s[j - 1] != c)
		max++;
	return (max);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**tab;
	int			i;
	int			j;
	int			index;

	tab = NULL;
	if (s)
	{
		j = 0;
		tab = (char **)malloc(sizeof(char *) * (ft_length(s, c) + 1));
		i = 0;
		while (s[i] != '\0')
		{
			if (s[i] != c)
			{
				index = i;
				while (s[i + 1] != c && s[i + 1] != '\0')
					i++;
				tab[j++] = ft_strsub(s, index, i - index + 1);
			}
			i++;
		}
		tab[j] = '\0';
	}
	return (tab);
}
