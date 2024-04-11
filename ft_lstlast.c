/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:04:22 by joleal-b          #+#    #+#             */
/*   Updated: 2023/10/27 15:26:27 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		else
			lst = lst->next;
	}
	return (lst);
}

/*void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
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
	list = ft_lstnew("O Matador ");
	str1 = ft_lstnew("Quer ");
	str2 = ft_lstnew("Chocolate");

	list->next = str1;
	str1->next = str2;
	printf("%s\n", "Lista: ");
	ft_print_list(list);
	printf("\n\n");
	printf("%s\n", "ft_lstlast: ");
	ft_print_list(ft_lstlast(list));
	return(0);
}*/
