/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:00:53 by reeali            #+#    #+#             */
/*   Updated: 2024/02/26 16:00:56 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_2d(char **x)
{
	int	j;

	j = 0;
	while (x[j] != NULL)
	{
		free(x[j]);
		j++;
	}
	free(x);
}

void	exit_any(t_list **stackA, char *s, char **x)
{
	free_2d(x);
	ft_lstclear(stackA, free);
	error_exit(s);
}

void	error_exit(char *arg_str)
{
	free(arg_str);
	write(2, "Error\n", 6);
	exit(1);
}
