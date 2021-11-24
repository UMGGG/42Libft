/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:48:42 by jaeyjeon          #+#    #+#             */
/*   Updated: 2021/11/24 17:26:06 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (len == 0 || *needle == '\0')
		return ((char *)haystack);
	while (i < len)
	{
		if (haystack[i] == needle[i])
		{
			while (1)
			{
				if (needle[i + j] == '\0')
					return ((char *)haystack + i);
				if (haystack[i + j] != needle[i + j])
					break ;
				j++;
			}
		}
		j = 0;
		i++;
	}
	return (NULL);
}
