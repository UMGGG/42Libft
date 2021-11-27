/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:48:42 by jaeyjeon          #+#    #+#             */
/*   Updated: 2021/11/28 01:06:25 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (len == 0 || haystack == NULL)
		return (NULL);
	while (i < len)
	{
		if (haystack[i] == needle[0])
		{
			while ((i + j) < len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + i);
				else if (haystack[i + j] != needle[j])
					break ;
				j++;
			}
		}
		j = 0;
		i++;
	}
	return (NULL);
}
