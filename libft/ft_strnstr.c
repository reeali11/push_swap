/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:06:09 by reeali            #+#    #+#             */
/*   Updated: 2024/02/22 17:06:12 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (len == 0 && haystack == 0)
	{
		return (NULL);
	}
	if (needle_len == '\0')
	{
		return ((char *)haystack);
	}
	while (*haystack && len >= needle_len)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle,
				needle_len) == 0)
		{
			return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}

// int main() {
//     const char* haystack = "wadha";
//     const char* needle = "wa";

//     char* res = ft_strnstr(haystack, needle,3);

//         printf("%s\n",res);
// 	char* rrr = strnstr(haystack, needle, 3);
// 		printf("[%s]\n",rrr);
//}