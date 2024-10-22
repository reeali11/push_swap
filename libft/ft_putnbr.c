/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:58:51 by reeali            #+#    #+#             */
/*   Updated: 2024/02/26 15:58:52 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb, int *len)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) = (*len) + 11;
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-', len);
		ft_putnbr(nb * -1, len);
	}
	else
	{
		if (nb > 9)
			ft_putnbr(nb / 10, len);
		ft_putchar(nb % 10 + 48, len);
	}
}
