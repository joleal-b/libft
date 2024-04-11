/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:49:40 by joleal-b          #+#    #+#             */
/*   Updated: 2023/10/27 14:39:20 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->content);
		list = list->next;
	}
}

int	main(void)
{
	t_list	*list;
	t_list	*str1;
	t_list	*str2;
	t_list	*new;
	list = ft_lstnew("O Matador .");
	str1 = ft_lstnew("Quer .");
	str2 = ft_lstnew("Chocolate .");
	new = ft_lstnew("Ola! .");

	list->next = str1;
	str1->next = str2;
	printf("%s\n", "Lista: ");
	ft_print_list(list);
	printf("\n\n");
	ft_lstadd_front(&list, new);
	printf("%s\n", "ft_lstadd_front: ");
	ft_print_list(list);
	return(0);
}*/
