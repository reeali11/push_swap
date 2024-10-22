/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:55:35 by reeali            #+#    #+#             */
/*   Updated: 2024/02/26 15:55:37 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_list **stackb)
{
	int	a;
	int	b;

	if (*stackb == NULL || ft_lstsize(*stackb) == 1)
		return ;
	a = (*stackb)->content;
	b = (*stackb)->next->content;
	(*stackb)->next->content = a;
	(*stackb)->content = b;
	ft_putstr_fd("sa\n", 1);
}

void	pa(t_list **stackb, t_list **stacka)
{
	t_list	*temp;
	t_list	*top;

	top = *stackb;
	temp = NULL;
	if (*stackb)
		temp = (*stackb)->next;
	if (*stackb == NULL)
		return ;
	ft_lstadd_front(stacka, top);
	*stackb = temp;
	ft_putstr_fd("pa\n", 1);
}

void	rb(t_list **stackb)
{
	t_list	*top;
	t_list	*last;

	if (*stackb == NULL || ft_lstsize(*stackb) == 1)
		return ;
	top = *stackb;
	last = ft_lstlast(*stackb);
	*stackb = top->next;
	last->next = top;
	top->next = NULL;
	ft_putstr_fd("rb\n", 1);
}

void	rrb(t_list **stackb)
{
	t_list	*first;
	t_list	*secend_last;
	t_list	*last;

	last = ft_lstlast(*stackb);
	secend_last = *stackb;
	first = *stackb;
	if (*stackb == NULL || ft_lstsize(*stackb) == 1)
		return ;
	while (secend_last->next->next != NULL)
		secend_last = secend_last->next;
	secend_last->next = NULL;
	last->next = first;
	*stackb = last;
	ft_putstr_fd("rrb\n", 1);
}
