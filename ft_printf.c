/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:47:26 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/29 12:47:26 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//not sure if to include ll.50-51

#include "includes/ft_printf.h"
#include <stdio.h>

int	update_len(int res, int *len)
{
	if (res < 0)
		return (-1);
	*len += res;
	return (0);
}

int	convert(char type, va_list args)
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
	//if (type == 'p')

	//if (type == 'x')

	//if (type == 'X')

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
			res = convert(format[++i], args);
		else
			res = print_char(format[i]);
		if (update_len(res, &len) < 0)
			return (-1);
		i++;
	}
	va_end(args);
	return (len);
}

int	main(void)
{
	int	i = 0;
	printf("TEST %i (no %%)\n", i);
	ft_printf("ft_printf");
	write(1, "\n", 1);
	printf("printf");
	printf("\n\n");
	i++;
	
	printf("TEST %i (%%c, o)\n", i);
	ft_printf("ft_printf: %c", 'o');
	write(1, "\n", 1);
	printf("printf:    %c", 'o');
	printf("\n\n");
	i++;

	printf("TEST %i (%%s, hello, world)\n", i);
	ft_printf("ft_printf: %s", "hello, world");
	write(1, "\n", 1);
	printf("printf:    %s", "hello, world");
	printf("\n\n");
	i++;

	printf("TEST %i (%%)\n", i);
	ft_printf("ft_printf: 100%%");
	write(1, "\n", 1);
	printf("printf:    100%%");
	printf("\n\n");
	i++;

	printf("TEST %i (%%d, 0)\n", i);
	ft_printf("ft_printf: %d", 0);
	write(1, "\n", 1);
	printf("printf:    %d", 0);
	printf("\n\n");
	i++;

	printf("TEST %i (%%i, -42)\n", i);
	ft_printf("ft_printf: %i", -42);
	write(1, "\n", 1);
	printf("printf:    %i", -42);
	printf("\n\n");
	i++;

	printf("TEST %i (%%u, 42)\n", i);
	ft_printf("ft_printf: %u", 42);
	write(1, "\n", 1);
	printf("printf:    %u", 42);
	printf("\n\n");
	i++;

	printf("TEST %i (%%u, -42)\n", i);
	ft_printf("ft_printf: %u", -42);
	i++;


	printf("\n");

	return (0);
}

/*TEST
invalid format
format ending with %
placeholders without corresponding arguments
invalid placeholder (null string)
multiple variables

*/