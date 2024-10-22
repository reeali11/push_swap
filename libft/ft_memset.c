/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:58:06 by reeali            #+#    #+#             */
/*   Updated: 2024/02/26 15:58:08 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int enc, size_t num)
{
	size_t	i;
	char	*p;

	p = (char *)str;
	i = 0;
	while (i < num)
	{
		p[i] = enc;
		i++;
	}
	return (str);
}

// int main()
//{
//	char str[] = "wadha ahmed";
//	ft_memset(str,'*',5);
//	printf("%s\n",str);
//	return (0);
//}
