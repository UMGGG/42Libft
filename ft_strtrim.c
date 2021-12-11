/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 20:09:28 by jaeyjeon          #+#    #+#             */
/*   Updated: 2021/12/11 12:49:09 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checkchar(char a, char const *b)
{
	int	i;

	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == a)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		strlen;

	i = 0;
	j = 0;
	strlen = (int)(ft_strlen(s1) - 1);
	while (checkchar(s1[i], set) == 1)
		i++;
	while (checkchar(s1[strlen], set) == 1)
		strlen--;
	str = malloc(sizeof(char) * (strlen + 1));
	if (str == 0)
		return (NULL);
	j = i;
	i = 0;
	while (j != (strlen + 1))
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
