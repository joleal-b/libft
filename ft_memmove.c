/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:43:44 by joleal-b          #+#    #+#             */
/*   Updated: 2023/10/09 15:17:34 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!d && !s)
		return (NULL);
	if (d > s)
	{
		while (n-- > 0)
		{
			d[n] = s[n];
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}

/*int	main(void)
{
      char dest[] = "matadorasff";
      char dest1[] = "matador";
      char dest2[] = "matador";
      char src[] = "samthekid";
      char src1[] = "samthekid";
      char src2[] = "samthekid";

      ft_memmove(dest, src, 8);
      puts(dest);
      memmove(dest1, src1, 8);
      puts(dest1);
      memcpy(dest2, src2, 8);
      puts(dest2);
}*/
