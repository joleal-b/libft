/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:11:18 by joleal-b          #+#    #+#             */
/*   Updated: 2023/10/19 16:46:50 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	while (n-- > 0)
	{
		if (*(unsigned char *)str == (unsigned char)c)
			return ((void *)str);
		str++;
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "o jardim do matador e muito lindo";
	int	c = 109;
	size_t n = 12;
	unsigned char	*test;

	test = ft_memchr(str, c, n);
	printf("%s\n", test);
}*/
