/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:02:40 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 16:09:44 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	long int	res;
	int			neg;
	int			i;

	neg = 0;
	res = 0;
	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			neg++;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	if (neg)
		res *= -1;
	return (res);
}

//TO TEST
/*int	main(int argc, char **argv)
{
	char	*nptr;

	if (argc != 2)
	{
		printf("Usage: [filename] [number]\n");
		return (1);
	}
	nptr = argv[1];
	printf("ft_atoi: %d\n", ft_atoi(nptr));
	printf("atoi: %d\n", atoi(nptr));
	printf("ft_atoi: %d\n", ft_atoi("2147483647"));
	printf("atoi: %d\n", atoi("2147483647"));
	printf("ft_atoi: %d\n", ft_atoi("-2147483648"));
	printf("atoi: %d\n", atoi("-2147483648"));
	printf("ft_atoi: %d\n", ft_atoi(NULL));
	return (0);
}*/