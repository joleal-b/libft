/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 07:59:00 by joleal-b          #+#    #+#             */
/*   Updated: 2023/11/02 16:48:50 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	print_char_with_index(unsigned int i, char *c)
{
	printf("Caractere na posição %u: %c\n", i, *c);
}

int	main(void)
{
	char str[] = "Matatatoooonnn";

	ft_striteri(str, print_char_with_index);
	return (0);
}*/
