/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:56:04 by reeali            #+#    #+#             */
/*   Updated: 2024/02/26 15:56:06 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if ((size != 0) && (count > (SIZE_MAX / size)))
		return (NULL);
	ptr = malloc(count * size);
	if (ptr != NULL)
	{
		ft_memset(ptr, 0, count * size);
	}
	return (ptr);
}
