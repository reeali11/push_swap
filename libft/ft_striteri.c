/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:59:33 by reeali            #+#    #+#             */
/*   Updated: 2024/02/26 15:59:34 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
	{
		return ;
	}
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

// void	ich(unsigned int index, char *c)
// {

// 	printf("Index : %u, char : %c\n",index,*c);
// }

// int main()
// {
// 	char	s[] = "Hello Wdha";
// 	ft_striteri(s,ich);
// 	return (0);
// }
