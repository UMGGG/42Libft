/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 02:07:50 by jaeyjeon          #+#    #+#             */
/*   Updated: 2021/12/10 02:30:10 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	strlen;
	size_t	sublen;
	char	*sub;

	strlen = len;
	sublen = 0;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == 0)
		return (NULL);
	while (s[start] != '\0' && strlen != 0)
	{
		sub[sublen] = s[start];
		start++;
		strlen--;
		sublen++;
	}
	sub[sublen] = '\0';
	return (sub);
}
