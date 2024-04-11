/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:12:56 by joleal-b          #+#    #+#             */
/*   Updated: 2023/10/19 16:13:00 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const	*s1, char const	*set)
{
	size_t			start;
	size_t			end;
	size_t			size;
	char			*new;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] != s1[start] && ft_strchr(set, s1[end]))
		end--;
	size = end - start;
	new = ft_substr(s1, start, size + 1);
	if (!new)
		return (NULL);
	return (new);
}

/*int	main(void)
{
	char	s1[] = "   Rosa,Rosa   ";
	char	set[] = " ";

	puts(ft_strtrim(s1, set));
}*/
