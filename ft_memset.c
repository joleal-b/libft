/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:43:08 by joleal-b          #+#    #+#             */
/*   Updated: 2023/10/30 16:58:01 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)str;
	i = 0;
	while (n > i)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

/*int   main(void)
{
      char  str[23] = "matador";
      int   c = 65;
      size_t n = 7;

      puts(str);
      ft_memset(str, c, n);
      puts(str);
      return (0);
}*/
