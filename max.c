/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:07:41 by reeali            #+#    #+#             */
/*   Updated: 2024/02/22 17:11:17 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_list **stacka)
{
	int		max;
	t_list	*node;

	node = *stacka;
	max = -2147483648;
	while (node != NULL)
	{
		if (max < node->content)
			max = node->content;
		node = node->next;
	}
	return (max);
}

int	find_max_index(t_list **stacka)
{
	int		max;
	t_list	*node;

	node = *stacka;
	max = -2147483648;
	while (node != NULL)
	{
		if (max < node->index)
			max = node->index;
		node = node->next;
	}
	return (max);
}

void	pback(t_list **stacka, t_list **stackb)
{
	t_list	*b;
	int		max;

	b = *(stackb);
	while (ft_lstsize(*stackb) > 0)
	{
		max = find_max_index(stackb);
		if ((b)->index == max)
			pa(stackb, stacka);
		else
		{
			if (find_length_index(stackb, max) >= (ft_lstsize(*stackb) / 2))
				rrb(stackb);
			else
				rb(stackb);
		}
		b = *(stackb);
	}
}
