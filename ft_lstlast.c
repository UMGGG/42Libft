/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <jaeyjeon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:11:52 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/01/12 15:28:43 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*testnode;

	if (lst == NULL)
		return (lst);
	testnode = lst;
	while (testnode->next != NULL)
		testnode = testnode->next;
	return (testnode);
}
