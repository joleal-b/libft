/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:42:26 by joleal-b          #+#    #+#             */
/*   Updated: 2023/10/03 14:50:35 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		{
			sign = sign * -1;
		}
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		res = ((res * 10) + (str[i] - 48));
		i++;
	}
	return (res * sign);
}

/*int	main(void)
{
	const	char str[] = "    \n   -214125safa12";

	printf("Minha: %d\n", ft_atoi(str));
	printf("Ori: %d\n", atoi(str));
}*/
