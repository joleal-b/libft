/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:41:06 by joleal-b          #+#    #+#             */
/*   Updated: 2023/10/12 12:26:23 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	size_t	i;
	size_t	j;
	char	*nova;

	if (!s1 || !s2)
		return (NULL);
	nova = malloc(ft_strlen(s1) + ft_strlen(s2) * sizeof(char) + 1);
	if (!nova)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		nova[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		nova[i] = s2[j];
		j++;
		i++;
	}
	nova[i] = '\0';
	return (nova);
}

/*int	main(void)
{
	char	s1[] = "Matador ";
	char	s2[] = "e muito l1ndu";

	puts(s1);
	puts(s2);
	puts(ft_strjoin(s1, s2));
}*/
