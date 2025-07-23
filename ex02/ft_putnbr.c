/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:48:36 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/23 12:09:28 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	n;
	char	c;

	n = nb;
	if (n < 0)
	{
		c = '-';
		write(1, &c, 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

// int	main(void)
// {
// 	ft_putnbr(0);
// 	write(1, "\n", 1);
// 	ft_putnbr(42);
// 	write(1, "\n", 1);
// 	ft_putnbr(-42);
// 	write(1, "\n", 1);
// 	ft_putnbr(2147483647); // INT_MAX
// 	write(1, "\n", 1);
// 	ft_putnbr(-2147483648); // INT_MIN
// 	write(1, "\n", 1);
// 	ft_putnbr(100000);
// 	write(1, "\n", 1);
// 	return (0);
// }
