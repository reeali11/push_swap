/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:59:27 by reeali            #+#    #+#             */
/*   Updated: 2024/02/26 15:59:28 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

// char	*ft_strchr(const char *s, int c)
// {
// 	if(c > 127)
// 		return((char *)s);
// 	if ((char)c == '\0')
// 	{
// 		return ((char *)s);
// 	}
// 	while (*s != c)
// 	{
// 		if (*s != '\0')
// 		{
// 			s++;
// 		}
// 		else{
// 	return (NULL);
// 	}
// 	}
// 		return ((char *)s);
// }

// int main()
// {
// 	const char * s = "hello wadha";
// 	int c = "p";
// 	char* res = ft_strchr(s,c);
// 	printf("%s\n",res);
// 	res = strchr(s,c);
// 	printf("%s\n",res);
// 	return(0);
// }
