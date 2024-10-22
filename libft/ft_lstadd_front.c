/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:56:57 by reeali            #+#    #+#             */
/*   Updated: 2024/02/26 15:57:00 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst || new)
	{
		new->next = *lst;
		*lst = new;
	}
}
// int	main(void)
// {
// 	t_list *head = NULL;
// 	t_list node1, node2, node3;

// 	node1.content = 7;
// 	node1.next = NULL;

// 	node2.content = 15;
// 	node2.next = NULL;

// 	ft_lstadd_front(&head, &node1);
// 	ft_lstadd_front(&head, &node2);
// 	t_list *current = head;
// 	while (current != NULL)
// 	{
// 		printf("%d -> ", current->content);
// 		current = current->next;
// 	}
// 	printf("\n");
// 	return (0);
// }
