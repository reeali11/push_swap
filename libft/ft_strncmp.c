/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:00:00 by reeali            #+#    #+#             */
/*   Updated: 2024/02/26 16:00:03 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// int main()
// {
// unsigned char * s1 = " ";
// unsigned char * s2 = "AaAtyAlo wadha";
// 	int res = ft_strncmp(s1,s2,3);
// 	printf("%d\n",res);
// 	return(0);
// }
