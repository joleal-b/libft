/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:21:06 by joleal-b          #+#    #+#             */
/*   Updated: 2023/10/30 11:53:30 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&new_list, new_node);
	}
	return (new_list);
}

/*void del(void *content)
{
	free(content);
}

void *change_content(void *content)
{
	char *str;

	str = ft_strdup((char *)content);
	str[0] = 'z';
	return ((void *)str);
}

int main(void)
{
	t_list *lst;
	t_list *new_lst;
	t_list *temp;

	lst = ft_lstnew(ft_strdup("abc"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("def")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("ghi")));

	new_lst = ft_lstmap(lst, &change_content, &del);

	temp = new_lst;
	while (temp)
	{
		ft_putstr_fd((char *)temp->content, 1);
		write(1, "\n", 1);
		temp = temp->next;
	}

	ft_lstclear(&lst, &del);
	ft_lstclear(&new_lst, &del);

	return (0);
}*/
