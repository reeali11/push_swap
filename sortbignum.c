/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortbignum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:55:08 by reeali            #+#    #+#             */
/*   Updated: 2024/02/26 17:32:47 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort100n(t_list **stacka, t_list **stackb)
{
	int		chnk;
	int		i;
	t_list	*a;

	i = 0;
	chnk = ft_chunks(stacka);
	a = *(stacka);
	while (ft_lstsize(*stacka) > 0)
	{
		if (a->index >= chnk * i && a->index <= (chnk * (i + 1)))
		{
			pb(stacka, stackb);
		}
		else
			ra(stacka);
		if (ft_lstsize(*stackb) == chnk * (i + 1))
			i++;
		a = *stacka;
	}
	pback(stacka, stackb);
}

void	cheak_doubls(t_list **stacka)
{
	t_list	*node;
	t_list	*temp_node;

	node = *stacka;
	temp_node = *stacka;
	while (temp_node != NULL)
	{
		node = temp_node->next;
		while (node != NULL)
		{
			if (temp_node->content == node->content)
			{
				ft_lstclear(stacka, free);
				write(2, "Error\n", 6);
				exit(0);
			}
			node = node->next;
		}
		temp_node = temp_node->next;
	}
}

int	ft_chunks(t_list **stacka)
{
	int	chnk;

	if (ft_lstsize(*stacka) <= 150)
		chnk = 15;
	else
		chnk = 35;
	return (chnk);
}
