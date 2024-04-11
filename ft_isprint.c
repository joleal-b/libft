/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:38:30 by joleal-b          #+#    #+#             */
/*   Updated: 2023/10/03 14:16:00 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	else
		return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isprint(10));
	printf("%d\n", ft_isprint(30));
	printf("%d\n", ft_isprint(127));
	printf("%d\n", ft_isprint(48));
	printf("%d\n", ft_isprint(97));
}*/
