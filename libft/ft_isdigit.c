/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:20:38 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 12:20:41 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

//TO TEST
/*int	main(int argc, char** argv)
{
	char	c;

	if (argc != 2)
	{
		printf("Usage: [filename] [character]\n");
		return (1);
	}
	c = argv[1][0];

	printf("ft_isdigit: ");
	if (isdigit(c))
		printf("%c is numeric\n", c);
	else
		printf("%c is not numeric\n", c);

	printf("isdigit: ");
	if (isdigit(c))
		printf("%c is numeric\n", c);
	else
		printf("%c is not numeric\n", c);

	return (0);
}*/