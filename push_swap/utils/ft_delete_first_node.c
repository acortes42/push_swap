/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_first_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 17:15:03 by acortes-          #+#    #+#             */
/*   Updated: 2021/03/30 17:17:28 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	delete_last_node(t_list **head)
{
	t_list	*currNode;

	currNode = *head;
	if ((*head) == NULL)
		return ;
	if ((*head)->next == NULL)
	{
		free(head);
		head = NULL;
		return ;
	}
	while (currNode->next && currNode->next->next != NULL)
		currNode = currNode->next;
	free(currNode->next);
	currNode->next = NULL;
}

void	delete_first_node(t_list **head)
{
	t_list	*tmp;

	if (head == NULL || *head == NULL)
		return ;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
}
