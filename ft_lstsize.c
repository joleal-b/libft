/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:39:33 by joleal-b          #+#    #+#             */
/*   Updated: 2023/10/27 14:52:42 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		len++;
		lst = lst->next;
	}
	return (len);
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
	list = ft_lstnew("O Matador ");
	str1 = ft_lstnew("foi ao ");
	str2 = ft_lstnew("jardim da Celeste");
	list->next = str1;
	str1->next = str2;
	printf("%s\n\n", "Lista: ");
	ft_print_list(list);
	printf("\n\n");
	printf("%s", "lstsize = ");
	printf("%d\n", ft_lstsize(list));
}*/
