/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:21:24 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 12:21:51 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include "libft.h"

static void	set_digits(char *s, long int nbr, size_t i)
{
	if (nbr < 0)
	{
		s[0] = '-';
		nbr *= -1;
	}
	if (nbr < 10)
	{
		s[i] = nbr + 48;
	}
	else
	{
		set_digits(s, nbr / 10, i - 1);
		s[i] = nbr % 10 + 48;
	}
}

static size_t	count_digits(long int nbr)
{
	size_t	digit_count;

	digit_count = 0;
	if (nbr < 0)
	{
		digit_count++;
		nbr *= -1;
	}
	if (nbr == 0)
	{
		return (1);
	}
	while (nbr > 0)
	{
		digit_count++;
		nbr /= 10;
	}
	return (digit_count);
}

char	*ft_itoa(int n)
{
	char		*s;
	long int	nbr;
	size_t		digit_count;

	nbr = n;
	digit_count = count_digits(nbr);
	s = malloc(digit_count + 1);
	if (!s)
		return (NULL);
	set_digits(s, nbr, digit_count - 1);
	s[digit_count] = '\0';
	return (s);
}

//TO TEST
/*int	main(int argc, char **argv)
{
	char	*s;
	int		n;

	if (argc != 2)
	{
		printf("Usage: [filename] [number]\n");
		return (1);
	}
	n = ft_atoi(argv[1]);
	s = ft_itoa(n);
	if (!s)
		printf("NULL\n");
	else
		printf("%s\n", s);
	free(s);

	//testing with INT_MIN
	s = ft_itoa(INT_MIN);
	if (!s)
		printf("NULL\n");
	else
		printf("%s\n", s);
	free(s);

	return (0);
}*/