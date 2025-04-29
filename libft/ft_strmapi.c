/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:25:21 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:25:27 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	size_t	i;

	if (!s || !f)
		return (NULL);
	dst = ft_strdup(s);
	if (!dst)
		return (NULL);
	i = 0;
	while (dst[i])
	{
		dst[i] = f(i, dst[i]);
		i++;
	}
	return (dst);
}

//TO TEST
/*char	testf(unsigned int i, char c)
{
	if (i > 0 && i % 3 == 0)
		return ('5');
	else if (i > 0 && i % 5 == 0)
		return ('3');
	else
		return (c);
}

int	main(int argc, char **argv)
{
	char	*src;
	char	*dst;

	if (argc != 2)
	{
		printf("Usage: [filename] [source string]\n");
		return (1);
	}
	src = argv[1];
	dst = ft_strmapi(src, testf);
	if (!dst)
	{
		printf("NULL\n");
		return (1);
	}
	printf("%s\n", dst);
	free(dst);
	return (0);
}*/