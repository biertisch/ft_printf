/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:59:56 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:12:48 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static void	free_all(char **arr, size_t i)
{
	while (i > 0)
	{
		free(arr[i - 1]);
		i--;
	}
	free(arr);
}

static int	alt_strlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	new_str(char const *s, char c, size_t i)
{
	if (s[i] != c && (s[i - 1] == c || i == 0))
		return (1);
	return (0);
}

static char	**build_arr(char const *s, char c, size_t str_count)
{
	char	**arr;
	size_t	i;
	size_t	j;

	arr = malloc(sizeof(char *) * (str_count + 1));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (i < str_count && s[j])
	{
		if (new_str(s, c, j))
		{
			arr[i] = ft_substr(s, j, alt_strlen(s + j, c));
			if (!arr[i])
			{
				free_all(arr, i);
				return (NULL);
			}
			i++;
		}
		j++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	str_count;
	size_t	i;

	if (!s)
		return (NULL);
	str_count = 0;
	i = 0;
	while (s[i])
	{
		if (new_str(s, c, i))
			str_count++;
		i++;
	}
	arr = build_arr(s, c, str_count);
	return (arr);
}

//TO TEST
/*int	main(int argc, char **argv)
{
	char	**arr;
	char	*s;
	char	c;
	int		i;

	if (argc != 3)
	{
		printf("Usage: [filename] [string] [delimiter character]\n");
		return (1);
	}
	s = argv[1];
	c = argv[2][0];
	arr = ft_split(s, c);
	if (!arr)
	{
		printf("NULL\n");
		return (1);
	}
	i = 0;
	while (arr[i])
	{
		printf("arr[%d]: %s\n", i, arr[i]);
		i++;
	}

	//free memory
	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
}*/