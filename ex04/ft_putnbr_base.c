/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:47:44 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/25 12:50:30 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	check_base(char *base)
{
	char	*ptr;
	char	*start;

	start = base;
	if (!base || !*base)
		return (1);
	while (*base)
	{
		if (*base == '+' || *base == '-' || *base <= 32 || *base > 126)
			return (1);
		ptr = start;
		while (*ptr)
		{
			if (ptr != base && *ptr == *base)
				return (1);
			ptr++;
		}
		base++;
	}
	if ((base - start) < 2)
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	nb;

	if (check_base(base))
		return ;
	base_len = 0;
	while (base[base_len])
		base_len++;
	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= base_len)
		ft_putnbr_base(nb / base_len, base);
	ft_putchar(base[nb % base_len]);
}

// int	main(void)
// {
// 	ft_putstr("Decimal (base 10): ");
// 	ft_putnbr_base(12345, "0123456789");
// 	ft_putchar('\n');
// 	ft_putstr("Binario (base 2): ");
// 	ft_putnbr_base(42, "01");
// 	ft_putchar('\n');
// 	ft_putstr("Hexadecimal (base 16): ");
// 	ft_putnbr_base(256, "0123456789ABCDEF");
// 	ft_putchar('\n');
// 	ft_putstr("Base poniguay (base 8): ");
// 	ft_putnbr_base(64, "poniguay");
// 	ft_putchar('\n');
// 	ft_putstr("Número negativo: ");
// 	ft_putnbr_base(-255, "0123456789ABCDEF");
// 	ft_putchar('\n');
// 	ft_putstr("Base inválida (caracteres repetidos): ");
// 	ft_putnbr_base(42, "00123456789"); // no imprime nada
// 	ft_putchar('\n');
// 	ft_putstr("Base inválida (solo un carácter): ");
// 	ft_putnbr_base(42, "0"); // no imprime nada
// 	ft_putchar('\n');
// 	ft_putstr("Base inválida (contiene '+'): ");
// 	ft_putnbr_base(42, "012+456"); // no imprime nada
// 	ft_putchar('\n');
// 	ft_putstr("Número cero: ");
// 	ft_putnbr_base(0, "0123456789ABCDEF");
// 	ft_putchar('\n');
// 	return (0);
// }
