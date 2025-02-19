/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:26:55 by jmellado          #+#    #+#             */
/*   Updated: 2025/02/19 18:00:15 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_length_pointer(unsigned long long ptr);

static void	ft_pointer(unsigned long long ptr);

int	ft_printf_pointer(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
		len += ft_printf_string("(nil)");
	else
	{
		len += ft_printf_string("0x");
		ft_pointer(ptr);
		len += ft_length_pointer(ptr);
	}
	return (len);
}

static void	ft_pointer(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_pointer(ptr / 16);
		ft_pointer(ptr % 16);
	}
	else
	{
		if (ptr < 10)
			ft_putchar(ptr + '0');
		else
			ft_putchar(ptr - 10 + 'a');
	}
}

static int	ft_length_pointer(unsigned long long ptr)
{
	int	len;

	len = 0;
	while (ptr > 0)
	{
		len++;
		ptr /= 16;
	}
	return (len);
}
/*
#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    unsigned long long ptr1 = 0;
    unsigned long long ptr2 = 123456789;
    unsigned long long ptr3 = 0xabcdef;

    printf("Testing ft_printf_pointer with ptr1 (0):\n");
    ft_printf_pointer(ptr1);
    printf("\n");

    printf("Testing ft_printf_pointer with ptr2 (123456789):\n");
    ft_printf_pointer(ptr2);
    printf("\n");

    printf("Testing ft_printf_pointer with ptr3 (0xabcdef):\n");
    ft_printf_pointer(ptr3);
    printf("\n");

    return 0;
}*/
