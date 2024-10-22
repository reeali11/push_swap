/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:08:16 by reeali            #+#    #+#             */
/*   Updated: 2024/02/26 17:28:10 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>

void	sa(t_list **stacka);
void	pb(t_list **stacka, t_list **stackb);
void	ra(t_list **stacka);
void	rra(t_list **stacka);
void	sb(t_list **stackb);
void	pa(t_list **stackb, t_list **stacka);
void	rb(t_list **stackb);
void	rrb(t_list **stackb);
void	sort2na(t_list **stacka);
void	sort3n(t_list **stacka);
void	sort4n(t_list **stacka, t_list **stackb);
void	sort5n(t_list **stacka, t_list **stackb);
int		find_min(t_list **stacka);
int		find_min_index(t_list **stacka);
int		find_max(t_list **stacka);
int		find_max_index(t_list **stacka);
int		find_length_min(t_list **stackb);
int		find_length_index(t_list **stacka, int index);
void	fill_index(t_list **stacka);
int		sorted(t_list **stacka);
void	pback(t_list **stacka, t_list **stackb);
int		cheak_its_swap(t_list **stackb);
void	free_2d(char **x);
void	exit_any(t_list **stacka, char *s, char **x);
void	error_exit(char *arg_str);
char	*join_everthing(char **av);
void	check_double_sign(char *arg_str);
void	pars_help(t_list **stacka, char *arg_str, char **x);
int		pars(t_list **stacka, char **av);
void	sort(t_list **stacka, t_list **stackb);
void	sort100n(t_list **stacka, t_list **stackb);
void	cheak_doubls(t_list **stacka);
int		ft_chunks(t_list **stacka);
void	ckeck_space(char **av);

#endif
