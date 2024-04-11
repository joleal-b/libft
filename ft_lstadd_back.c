/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:55:00 by joleal-b          #+#    #+#             */
/*   Updated: 2023/10/28 14:02:53 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back;

	if (*lst == NULL)
		*lst = new;
	else
	{
		back = ft_lstlast(*lst);
		back->next = new;
	}
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
	t_list	*str0;
	t_list	*str1;
	list = ft_lstnew("O Matador ");
	str0 = ft_lstnew("foi ao ");
	str1 = ft_lstnew("jardim da celeste");
	list->next = str0;
	str0->next = str1;
	printf("%s\n\n", "Lista: ");
	ft_print_list(list);
	printf("\n\n");
	printf("%s\n", "ft_lstlast = ");
	ft_print_list(ft_lstlast(list));
}*/
