/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:56:10 by reeali            #+#    #+#             */
/*   Updated: 2024/02/26 15:56:13 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_hexa(unsigned int x, int *len, char c)
{
	char	str[25];
	char	*bc;
	int		i;

	if (c == 'X')
		bc = "0123456789ABCDEF";
	else
		bc = "0123456789abcdef";
	i = 0;
	if (x == 0)
	{
		ft_putchar('0', len);
		return ;
	}
	while (x != 0)
	{
		str[i] = bc[x % 16];
		x = x / 16;
		i++;
	}
	while (i--)
		ft_putchar(str[i], len);
}
