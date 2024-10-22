/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:09:22 by reeali            #+#    #+#             */
/*   Updated: 2024/02/26 15:52:10 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_list **stacka)
{
	int		min;
	t_list	*node;

	node = *stacka;
	min = 2147483647;
	while (node != NULL)
	{
		if (min > node->content)
			min = node->content;
		node = node->next;
	}
	return (min);
}

int	find_min_index(t_list **stacka)
{
	int		min;
	t_list	*node;

	node = *stacka;
	min = 2147483647;
	while (node != NULL)
	{
		if (min > node->index)
			min = node->index;
		node = node->next;
	}
	return (min);
}
