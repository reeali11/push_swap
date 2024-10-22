/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:55:29 by reeali            #+#    #+#             */
/*   Updated: 2024/02/26 16:04:57 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **stacka)
{
	int	a;
	int	b;

	if (*stacka == NULL || ft_lstsize(*stacka) == 1)
		return ;
	a = (*stacka)->content;
	b = (*stacka)->next->content;
	(*stacka)->next->content = a;
	(*stacka)->content = b;
	ft_printf("sa\n", 1);
}

void	pb(t_list **stacka, t_list **stackb)
{
	t_list	*top;
	t_list	*temp;

	temp = (*stacka)->next;
	top = *stacka;
	if (*stacka == NULL)
		return ;
	ft_lstadd_front(stackb, top);
	*stacka = temp;
	ft_printf("pb\n", 1);
}

void	ra(t_list **stacka)
{
	t_list	*top;
	t_list	*last;

	if (*stacka == NULL || ft_lstsize(*stacka) == 1)
		return ;
	top = *stacka;
	last = ft_lstlast(*stacka);
	*stacka = top->next;
	last->next = top;
	top->next = NULL;
	ft_printf("ra\n", 1);
}

void	rra(t_list **stacka)
{
	t_list	*first;
	t_list	*secend_last;
	t_list	*last;

	last = ft_lstlast(*stacka);
	secend_last = *stacka;
	first = *stacka;
	if (*stacka == NULL || ft_lstsize(*stacka) == 1)
		return ;
	while (secend_last->next->next != NULL)
		secend_last = secend_last->next;
	secend_last->next = NULL;
	last->next = first;
	*stacka = last;
	ft_printf("rra\n", 1);
}
