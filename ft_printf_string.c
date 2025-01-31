/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:59:51 by noepache          #+#    #+#             */
/*   Updated: 2025/01/31 10:31:39 by jmellado         ###   ########.fr       */
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
