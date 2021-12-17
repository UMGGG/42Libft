/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 00:09:14 by jaeyjeon          #+#    #+#             */
/*   Updated: 2021/12/18 01:10:11 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	if (n == 0)
		return (0);
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (str == 0)
		return (0);
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
		if (i == 0)
			if (s[i] != c)
				listsize++;
		if (s[i] == c)
			if (s[i + 1] != '\0' && s[i + 1] != c)
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
	save = 0;
	strlist = (char **)malloc(sizeof(char *) * ft_wordcount(s, c) + 1);
	if (!strlist)
		return (NULL);
	while (i < ft_wordcount(s, c) && s[k] != '\n')
	{
		if (s[k] == c)
			k++;
		else
		{
			save = k;
			while (s[k] != c && s[k] != '\n')
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

int main()
{
	char		**strr;
	const char	*str = "1212a1233a44a233";

	strr = ft_split(str, 'a');
	printf("%s\n%s\n%s\n%s\n%s\n",strr[0], strr[1],strr[2],strr[3],strr[4]);
}
