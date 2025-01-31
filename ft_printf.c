/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:26:24 by jmellado          #+#    #+#             */
/*   Updated: 2025/01/31 12:26:27 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_select_format(va_list args, const char word)
{
	int	len;

	len = 0;
	if (word == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (word == 's')
		len += ft_printf_string(va_arg(args, char *));
	else if (word == 'p')
		len += ft_printf_pointer(va_arg(args, unsigned long long));
	else if (word == 'd' || word == 'i')
		len += ft_printf_number(va_arg(args, int));
	else if (word == 'u')
		len += ft_printf_unsigned(va_arg(args, unsigned int));
	else if (word == 'x')
		len += ft_printf_hex(va_arg(args, unsigned int), 'x');
	else if (word == 'X')
		len += ft_printf_hex(va_arg(args, unsigned int), 'X');
	else
		len += ft_putchar(word);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_select_format(args, str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
