/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:52:28 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/29 14:52:28 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include "stdarg.h"

int	ft_printf(const char *format, ...);
int	convert(char type, va_list args);
int	update_len(int res, int *len);
int	print_char(char c);
int	print_str(char *s);
int	print_int(int n);
int	print_uint(unsigned int n);

#endif