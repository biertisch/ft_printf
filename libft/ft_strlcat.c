/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:20:38 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:22:16 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	ft_strlcpy(dst + dst_len, src, size - dst_len);
	return (dst_len + src_len);
}

//TO TEST
/*int	main(int argc, char **argv)
{
	char	dst1[50] = "hello";
	char	dst2[50] = "hello";
	char	dst3[8] = "";
	char	dst4[8] = "";
	char	*src;
	int		size;

	if (argc != 3)
	{
		printf("Usage: [filename] [source string] [size]\n");
		return (1);
	}
	src = argv[1];
	size = ft_atoi(argv[2]);
	printf("ft_strlcat: %zu\n", ft_strlcat(dst1, src, size));
	printf("Destination string: %s\n", dst1);
	printf("strlcat: %zu\n", strlcat(dst2, src, size));
	printf("Destination string: %s\n", dst2);

	printf("ft_strlcat: %zu\n", ft_strlcat(dst3, src, size));
	printf("Destination string: %s\n", dst3);
	printf("strlcat: %zu\n", strlcat(dst4, src, size));
	printf("Destination string: %s\n", dst4);

	return (0);
}*/