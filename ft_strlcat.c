/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:30:17 by joleal-b          #+#    #+#             */
/*   Updated: 2023/10/30 09:20:26 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ldest;
	size_t	lsrc;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	ldest = ft_strlen(dst);
	lsrc = ft_strlen(src);
	j = ldest;
	if (ldest >= size)
		return (size + lsrc);
	while (i < size - 1 - ldest && src[i] != '\0')
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (ldest + lsrc);
}

/*#include <bsd/string.h>
int	main(void)
{
	char	dst[8] = "matador";
	const	char src[8] = "ronaldo";
	size_t	size = 6;
	
	printf("%s tamanho do src: %zu \n",src, ft_strlcat(dst, src, size));
	printf("Ori: %s tamanho do src: %zu\n",src, strlcat(dst, src, size));
}*/
