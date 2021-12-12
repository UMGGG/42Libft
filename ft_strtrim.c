/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 20:09:28 by jaeyjeon          #+#    #+#             */
/*   Updated: 2021/12/13 00:00:34 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checkchar(char a, char const *b)
{
	int	i;

	i = ft_strlen(b);
	while (i >= 0)
	{
		if (b[i] == a)
			return (1);
		i--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	if (s1 == 0)
		return (0);
	while (s1[i] && checkchar(s1[i], set))
		i++;
	while (s1[j - 1] && checkchar(s1[j], set) && i < j)
		j--;
	str = ft_substr(s1, i, j - i + 1);
	return (str);
}
