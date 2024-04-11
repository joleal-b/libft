/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 08:12:32 by joleal-b          #+#    #+#             */
/*   Updated: 2023/10/20 09:21:33 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			word++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (word);
}

static int	ft_strlen_sep(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		i++;
	}
	return (i);
}

static char	*ft_print_words(char const *str, char c)
{
	size_t	lenstr;
	char	*array;

	lenstr = ft_strlen_sep(str, c);
	array = (char *)malloc((lenstr + 1) * sizeof(char));
	ft_strlcpy(array, str, lenstr + 1);
	return (array);
}

static char	**ft_allocate(char **array, char const *s, int count, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < count && s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			array[j] = ft_print_words((s + i), c);
			j++;
		}
		while (s[i] && s[i] != c)
		{
			i++;
		}
	}
	array[j] = 0;
	return (array);
}

char	**ft_split(char const	*s, char c)
{
	char	**array;
	int		count;

	if (!s)
		return (NULL);
	count = ft_count_words(s, c);
	array = (char **)malloc((count + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	array = ft_allocate(array, s, count, c);
	return (array);
}

/*int	main(void)
{
	char	*str = "Majo Matador Joaozinho SamTheKid";
	char	sepa = ' ';
	char	**rest = ft_split(str, sepa);
	int	i = 0;

	while (rest[i])
	{
		puts(rest[i]);
		free(rest[i]);
		i++;
	}
	free(rest);
	return (0);
}*/
