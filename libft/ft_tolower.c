/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:29:21 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:29:40 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

//TO TEST
/*int	main(int argc, char **argv)
{
	char	c;

	if (argc != 2)
	{
		printf("Usage: [filename] [character]\n");
		return (1);
	}
	c = argv[1][0];
	printf("ft_tolower: %c\n", ft_tolower(c));
	c = argv[1][0];
	printf("tolower: %c\n", tolower(c));
	return (0);
}*/
