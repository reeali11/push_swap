/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:55:01 by reeali            #+#    #+#             */
/*   Updated: 2024/02/26 17:07:46 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **stacka, t_list **stackb)
{
	int	length;

	length = ft_lstsize(*stacka);
	if (length == 2)
		sort2na(stacka);
	if (length == 3)
		sort3n(stacka);
	if (length == 4)
		sort4n(stacka, stackb);
	if (length == 5)
		sort5n(stacka, stackb);
	if (length > 5)
		sort100n(stacka, stackb);
}

int	main(int ac, char **av)
{
	t_list	*stacka;
	t_list	*stackb;

	stacka = NULL;
	stackb = NULL;
	if (ac == 1)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	ckeck_space(av);
	pars(&stacka, av);
	if (sorted(&stacka))
	{
		ft_lstclear(&stacka, free);
		exit(1);
	}
	fill_index(&stacka);
	sort(&stacka, &stackb);
	ft_lstclear(&stacka, free);
	return (0);
}
