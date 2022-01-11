/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 00:09:14 by jaeyjeon          #+#    #+#             */
/*   Updated: 2021/12/21 17:14:06 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = NULL;
	if (n == 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (str == 0)
		return (NULL);
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_freeall(char **list)
{
	size_t	j;

	j = 0;
	while (!list[j])
	{
		free(list[j]);
		j++;
	}
	free(list);
	return (NULL);
}

size_t	ft_wordcount(char const *s, char c)
{
	size_t	listsize;
	size_t	i;

	i = 0;
	listsize = 0;
	if (s == 0)
		return (0);
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c) || \
		(s[i] == c && s[i + 1] != '\0' && s[i + 1] != c))
			listsize++;
		i++;
	}
	return (listsize);
}

char	**ft_split(char const *s, char c)
{
	char	**strlist;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	save;

	i = 0;
	j = 0;
	k = 0;
	strlist = (char **)malloc(sizeof(char *) * ft_wordcount(s, c) + 1);
	if (!strlist)
		return (NULL);
	while (i < ft_wordcount(s, c) && s[k] != '\0')
	{
		if (s[k] == c)
			k++;
		else
		{
			save = k;
			while (s[k] != c && s[k] != '\0')
			{
				j++;
				k++;
			}
			strlist[i] = ft_strndup(&s[save], j);
			if (strlist[i] == 0)
				return (ft_freeall(strlist));
			i++;
			j = 0;
		}
	}
	strlist[i] = 0;
	return (strlist);
}
