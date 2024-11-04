/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-jama <ael-jama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:50:02 by ael-jama          #+#    #+#             */
/*   Updated: 2024/11/03 18:42:41 by ael-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*funct(t_list *head, t_list *ptr2, void (*del)(void *))
{
	ptr2->next = NULL;
	ft_lstclear(&head, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*ptr2;
	t_list	*head;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	head = malloc(sizeof(t_list));
	if (head == NULL)
		return (NULL);
	head->content = f(lst->content);
	ptr = head;
	while (lst->next != NULL)
	{
		lst = lst->next;
		ptr2 = ptr;
		ptr = malloc(sizeof(t_list));
		if (ptr == NULL)
			return (funct(head, ptr2, del));
		ptr2->next = ptr;
		ptr->content = f(lst->content);
	}
	ptr->next = NULL;
	return (head);
}
