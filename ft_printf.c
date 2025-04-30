/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:47:26 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/30 12:17:19 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//not sure if to include ll.60-61

#include "includes/ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	update_len(int res, int *len)
{
	if (res < 0)
		return (-1);
	*len += res;
	return (0);
}

int	convert(va_list args, char type)
{
	if (type == '%')
		return (print_char('%'));
	if (type == 'c')
		return (print_char(va_arg(args, int)));
	if (type == 's')
		return (print_str(va_arg(args, char *)));
	if (type == 'd' || type == 'i')
		return (print_int(va_arg(args, int)));
	if (type == 'u')
		return (print_uint(va_arg(args, unsigned int)));
	if (type == 'x' || type == 'X')
		return (print_hex(va_arg(args, unsigned int), type));
	if (type == 'p')
		return (print_ptr(va_arg(args, void *)));
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		res;
	int		i;

	if (!format)
		return (-1);
	len = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && !format[i + 1])
			return (-1);
		else if (format[i] == '%' && format[i + 1])
			res = convert(args, format[++i]);
		else
			res = print_char(format[i]);
		if (update_len(res, &len) < 0)
			return (-1);
		i++;
	}
	va_end(args);
	return (len);
}

/*int	main(void)
{
	int	i;
	int	ft;
	int	og;

	i = 0;

	printf("TEST %i (no %%)\n", i);
	ft = ft_printf("ft_printf");
	write(1, "\n", 1);
	printf("return value: %d\n", ft);
	og = printf("printf");
	printf("\nreturn value: %d\n\n", og);
	i++;
	
	printf("TEST %i (%%c, 'o')\n", i);
	ft = ft_printf("ft_printf: %c", 'o');
	write(1, "\n", 1);
	printf("return value: %d\n", ft);
	og = printf("printf:    %c", 'o');
	printf("\nreturn value: %d\n\n", og);
	i++;

	printf("TEST %i (%%c, '9')\n", i);
	ft = ft_printf("ft_printf: %c", '9');
	write(1, "\n", 1);
	printf("return value: %d\n", ft);
	og = printf("printf:    %c", '9');
	printf("\nreturn value: %d\n\n", og);
	i++;

	printf("TEST %i (%%c, '!')\n", i);
	ft = ft_printf("ft_printf: %c", '!');
	write(1, "\n", 1);
	printf("return value: %d\n", ft);
	og = printf("printf:    %c", '!');
	printf("\nreturn value: %d\n\n", og);
	i++;

	printf("TEST %i (%%c, 128)\n", i);
	ft = ft_printf("ft_printf: %c", 128);
	write(1, "\n", 1);
	printf("return value: %d\n", ft);
	og = printf("printf:    %c", 128);
	printf("\nreturn value: %d\n\n", og);
	i++;

	printf("TEST %i (%%s, 'hello, world')\n", i);
	ft = ft_printf("ft_printf: %s", "hello, world");
	write(1, "\n", 1);
	printf("return value: %d\n", ft);
	og = printf("printf:    %s", "hello, world");
	printf("\nreturn value: %d\n\n", og);
	i++;

	printf("TEST %i (%%s, '')\n", i);
	ft = ft_printf("ft_printf: %s", "");
	write(1, "\n", 1);
	printf("return value: %d\n", ft);
	og = printf("printf:    %s", "");
	printf("\nreturn value: %d\n\n", og);
	i++;

	printf("TEST %i (%%s, NULL)\n", i);
	ft = ft_printf("ft_printf: %s", NULL);
	write(1, "\n", 1);
	printf("return value: %d\n\n", ft);

	printf("TEST %i (%%)\n", i);
	ft = ft_printf("ft_printf: 100%%");
	write(1, "\n", 1);
	printf("return value: %d\n", ft);
	og = printf("printf:    100%%");
	printf("\nreturn value: %d\n\n", og);
	i++;

	printf("TEST %i (%%d, 0)\n", i);
	ft = ft_printf("ft_printf: %d", 0);
	write(1, "\n", 1);
	printf("return value: %d\n", ft);
	og = printf("printf:    %d", 0);
	printf("\nreturn value: %d\n\n", og);
	i++;

	printf("TEST %i (%%d, 3)\n", i);
	ft = ft_printf("ft_printf: %d", 3);
	write(1, "\n", 1);
	printf("return value: %d\n", ft);
	og = printf("printf:    %d", 3);
	printf("\nreturn value: %d\n\n", og);
	i++;

	printf("TEST %i (%%d, INT_MIN)\n", i);
	ft = ft_printf("ft_printf: %d", INT_MIN);
	write(1, "\n", 1);
	printf("return value: %d\n", ft);
	og = printf("printf:    %d", INT_MIN);
	printf("\nreturn value: %d\n\n", og);
	i++;

	printf("TEST %i (%%i, -42)\n", i);
	ft = ft_printf("ft_printf: %i", -42);
	write(1, "\n", 1);
	printf("return value: %d\n", ft);
	og = printf("printf:    %i", -42);
	printf("\nreturn value: %d\n\n", og);
	i++;

	printf("TEST %i (%%i, INT_MAX)\n", i);
	ft = ft_printf("ft_printf: %i", INT_MAX);
	write(1, "\n", 1);
	printf("return value: %d\n", ft);
	og = printf("printf:    %i", INT_MAX);
	printf("\nreturn value: %d\n\n", og);
	i++;

	printf("TEST %i (%%u, 42)\n", i);
	ft = ft_printf("ft_printf: %u", 42);
	write(1, "\n", 1);
	printf("return value: %d\n", ft);
	og = printf("printf:    %u", 42);
	printf("\nreturn value: %d\n\n", og);
	i++;

	printf("TEST %i (%%u, 0)\n", i);
	ft = ft_printf("ft_printf: %u", 0);
	write(1, "\n", 1);
	printf("return value: %d\n", ft);
	og = printf("printf:    %u", 0);
	printf("\nreturn value: %d\n\n", og);
	i++;

	printf("TEST %i (%%u, INT_MAX)\n", i);
	ft = ft_printf("ft_printf: %u", INT_MAX);
	write(1, "\n", 1);
	printf("return value: %d\n", ft);
	og = printf("printf:    %u", INT_MAX);
	printf("\nreturn value: %d\n\n", og);
	i++;

	printf("TEST %i (%%u, -42)\n", i);
	ft = ft_printf("ft_printf: %u", -42);
	write(1, "\n", 1);
	printf("return value: %d\n\n", ft);
	i++;

	printf("TEST %i (%%x, 42)\n", i);
	ft = ft_printf("ft_printf: %x", 42);
	write(1, "\n", 1);
	printf("return value: %d\n", ft);
	og = printf("printf:    %x", 42);
	printf("\nreturn value: %d\n\n", og);
	i++;

	printf("TEST %i (%%x, 255)\n", i);
	ft = ft_printf("ft_printf: %x", 255);
	write(1, "\n", 1);
	printf("return value: %d\n", ft);
	og = printf("printf:    %x", 255);
	printf("\nreturn value: %d\n\n", og);
	i++;

	printf("TEST %i (%%X, 42)\n", i);
	ft = ft_printf("ft_printf: %X", 42);
	write(1, "\n", 1);
	printf("return value: %d\n", ft);
	og = printf("printf:    %X", 42);
	printf("\nreturn value: %d\n\n", og);
	i++;

	printf("TEST %i (%%X, 255)\n", i);
	ft = ft_printf("ft_printf: %X", 255);
	write(1, "\n", 1);
	printf("return value: %d\n", ft);
	og = printf("printf:    %X", 255);
	printf("\nreturn value: %d\n\n", og);
	i++;

	printf("\n");

	return (0);
}*/

/*TEST
multiple variables
invalid format
format ending with %
placeholders without corresponding arguments
invalid placeholder %r
*/
