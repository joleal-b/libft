/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:10:33 by joleal-b          #+#    #+#             */
/*   Updated: 2023/10/30 13:47:14 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*curr;

	curr = *lst;
	if (!lst || !del)
		return ;
	while (curr)
	{
		temp = curr->next;
		ft_lstdelone(curr, del);
		curr = temp;
	}
	*lst = NULL;
}

/*void	del(void *content)
{
	free(content);
}

int main()
{
	t_list *head = malloc(sizeof(t_list));
	head->content = malloc(10);
	head->next = malloc(sizeof(t_list));
	head->next->content = malloc(10);
	head->next->next = NULL;

	ft_lstclear(&head, del);

	if (head == NULL)
		printf("A lista foi apagada com sucesso.\n");
	else
		printf("A lista não foi apagada corretamente.\n");

	return 0;
}*/
