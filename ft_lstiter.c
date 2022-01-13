/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <jaeyjeon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:28:32 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/01/12 15:30:16 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*save;

	if (lst == NULL || f == NULL)
		return ;
	save = lst;
	while (save != NULL)
	{
		f(save->content);
		save = save -> next;
	}
}
