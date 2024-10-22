/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:59:13 by reeali            #+#    #+#             */
/*   Updated: 2024/02/26 15:59:16 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunsnbr(unsigned int unnb, int *len)
{
	if (unnb > 9)
	{
		ft_putunsnbr(unnb / 10, len);
		ft_putunsnbr(unnb % 10, len);
	}
	else
		ft_putchar(unnb + 48, len);
}
