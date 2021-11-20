/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:25:25 by jaeyjeon          #+#    #+#             */
/*   Updated: 2021/11/20 19:43:15 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t l)
{
	char	*tmp;
	size_t		i;
	
	i = 0;
	tmp = dst;
	if (src == NULL && dst == NULL)
		return (dst);
	if (dst < src)
	{
		while (i < l)
			{
				((unsigned char *)tmp)[i] = ((unsigned char *)src)[i];
				i++;
			}
	}
	else
	{
		while (i < l)
		{
			((unsigned char *)tmp)[l -1 -i] = ((unsigned char *)src)[l -1 -i];
			i++;
		}    
	}
	return (dst);
}