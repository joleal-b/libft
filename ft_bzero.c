/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:25:24 by joleal-b          #+#    #+#             */
/*   Updated: 2023/10/09 15:04:44 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (n > i)
	{
		str[i] = '\0';
		i++;
	}
}

/*#include <stdio.h>

int   main(void)
{
    char str[50] = "majo deseparece";

    bzero(str, 10);
    printf("Ori: Antes: %d Depois: %s \n", 2, str);
    ft_bzero(str, 10);
    printf("Ori: Antes: %d Depois: %s \n", 2, str);
    return (0);
}*/
