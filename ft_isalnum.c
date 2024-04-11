/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:20:47 by joleal-b          #+#    #+#             */
/*   Updated: 2023/11/01 09:25:02 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91)
		|| (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_isalnum('0'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('$'));
	printf("%d\n", ft_isalnum('*'));
}*/
