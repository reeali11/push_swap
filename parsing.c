/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:54:53 by reeali            #+#    #+#             */
/*   Updated: 2024/02/26 16:57:34 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ckeck_space(char **av)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (av[i])
	{
		x = 0;
		while (av[i][x])
		{
			if (av[i][x] != 32 && av[i][x] != '\t')
				break ;
			x++;
		}
		if (!av[i][x])
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
}

char	*join_everthing(char **av)
{
	char	*s;
	int		i;

	s = NULL;
	i = 1;
	while (av[i])
	{
		s = ft_strjoin_(s, av[i]);
		s = ft_strjoin_(s, " ");
		i++;
	}
	i = 0;
	while (s[i] != '\0')
	{
		if (ft_isdigit(s[i]) == 0)
			error_exit(s);
		i++;
	}
	return (s);
}

void	check_double_sign(char *arg_str)
{
	int	i;

	i = -1;
	while (arg_str[++i] != '\0')
		if (arg_str[i] == '+' || arg_str[i] == '-')
			if (arg_str[i] == '+' || arg_str[i] == '-')
				if (arg_str[i + 1] == '+' || arg_str[i + 1] == '-')
					error_exit(arg_str);
}

void	pars_help(t_list **stacka, char *arg_str, char **x)
{
	int		i;
	int		c;
	t_list	*elem;

	i = 0;
	while (x[i])
	{
		c = -1;
		if ((x[i][0] == '-' || x[i][0] == '+') && x[i][1] == '\0')
			exit_any(stacka, arg_str, x);
		while (x[i][++c] != '\0')
			if ((x[i][c] == '-' || x[i][c] == '+') && c != 0)
				exit_any(stacka, arg_str, x);
		elem = ft_lstnew(ft_atoi((x[i]), stacka, arg_str, x));
		if (elem == NULL)
			exit_any(stacka, arg_str, x);
		ft_lstadd_back(stacka, elem);
		i++;
	}
}

int	pars(t_list **stacka, char **av)
{
	char	*arg_str;
	char	**x;

	arg_str = join_everthing(av);
	check_double_sign(arg_str);
	x = ft_split(arg_str, ' ');
	if (*x == NULL)
	{
		free(x);
		error_exit(arg_str);
	}
	pars_help(stacka, arg_str, x);
	free_2d(x);
	free(arg_str);
	cheak_doubls(stacka);
	return (1);
}
