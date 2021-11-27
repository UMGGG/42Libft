/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:21:25 by jaeyjeon          #+#    #+#             */
/*   Updated: 2021/11/28 01:30:18 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*cdest;
	size_t	destlen;
	size_t	left;

	cdest = dst;
	left = size;
	while (left-- != 0 && *cdest != '\0')
		cdest++;
	destlen = cdest - dst;
	left = size - destlen;
	if (left == 0)
		return (destlen + ft_strlen(src));
	while (*src != '\0')
	{
		if (left > 1)
		{
			*cdest++ = *src;
			left--;
		}
		src++;
	}
	*cdest = '\0';
	return (destlen + ft_strlen(src));
}
