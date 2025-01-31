/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:26:43 by jmellado          #+#    #+#             */
/*   Updated: 2025/01/31 12:26:49 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_string(char *str)
{
	int	len;

	len = 0;
	if (str == 0)
	{
		return (ft_printf_string("(null)"));
	}
	while (str[len])
	{
		len += ft_putchar(str[len]);
	}
	return (len);
}
