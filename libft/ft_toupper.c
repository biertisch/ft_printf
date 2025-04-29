/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:30:02 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:30:06 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
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
	printf("ft_toupper: %c\n", ft_toupper(c));
	c = argv[1][0];
	printf("toupper: %c\n", toupper(c));
	return (0);
}*/
