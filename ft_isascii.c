/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:46:01 by joleal-b          #+#    #+#             */
/*   Updated: 2023/10/03 14:15:28 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d\n", ft_isascii(178));
	printf("%d\n", ft_isascii(153));
	printf("%d\n", ft_isascii(24));
	printf("%d\n", ft_isascii(-2));
	printf("%d\n", isascii(178));
	printf("%d\n", isascii(153));
	printf("%d\n", isascii(24));
	printf("%d\n", isascii(-2));
}*/
