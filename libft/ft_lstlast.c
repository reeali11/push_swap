/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:57:19 by reeali            #+#    #+#             */
/*   Updated: 2024/02/26 15:57:21 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (0);
	while (lst)
	{
		if (lst->next == NULL)
		{
			return (lst);
		}
		lst = lst->next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list	*lastNode;

// 	t_list node1, node2, node3;
// 	node1.content = 10;
// 	node1.next = &node2;
// 	node2.content = 30;
// 	node2.next = &node3;
// 	node3.content = 15;
// 	node3.next = NULL;
// 	lastNode = ft_lstlast(&node1);
// 	printf("last node  : %d\n", lastNode->content);
// 	return (0);
// }
