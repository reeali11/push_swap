/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:55:14 by reeali            #+#    #+#             */
/*   Updated: 2024/02/26 15:55:21 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2na(t_list **stacka)
{
	t_list	*node;
	int		n1;
	int		n2;

	node = *stacka;
	n1 = node->content;
	n2 = node->next->content;
	if (n1 > n2)
		sa(stacka);
}

void	sort3n(t_list **stacka)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = (*stacka)->content;
	n2 = (*stacka)->next->content;
	n3 = (*stacka)->next->next->content;
	if ((n1 < n2) && (n2 < n3) && (n1 < n3))
		return ;
	if ((n1 > n2) && (n2 < n3) && (n1 < n3))
		sa(stacka);
	else if ((n1 > n2) && (n2 > n3) && (n1 > n3))
	{
		sa(stacka);
		rra(stacka);
	}
	else if ((n1 < n2) && (n2 > n3) && (n1 > n3))
		rra(stacka);
	else if ((n1 < n2) && (n2 > n3) && (n1 < n3))
	{
		sa(stacka);
		ra(stacka);
	}
	else if ((n1 > n2) && (n2 < n3) && (n1 > n3))
		ra(stacka);
}

void	sort4n(t_list **stacka, t_list **stackb)
{
	int	min;

	min = find_min(stacka);
	while ((*stacka)->content != min)
	{
		ra(stacka);
	}
	pb(stacka, stackb);
	sort3n(stacka);
	pa(stackb, stacka);
}

void	sort5n(t_list **stacka, t_list **stackb)
{
	int	min;

	min = find_min(stacka);
	while ((*stacka)->content != min)
	{
		if (find_length_min(stacka) > ft_lstsize(*stacka) / 2)
			rra(stacka);
		else
			ra(stacka);
	}
	pb(stacka, stackb);
	min = find_min(stacka);
	while ((*stacka)->content != min)
	{
		if (find_length_min(stacka) > (ft_lstsize(*stacka) / 2))
			rra(stacka);
		else
			ra(stacka);
	}
	pb(stacka, stackb);
	sort3n(stacka);
	pa(stackb, stacka);
	pa(stackb, stacka);
}
