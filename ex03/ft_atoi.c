/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:55:48 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/25 12:50:29 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || (*str == ' '))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

// int	main(void)
// {
// 	char	*test1;
// 	char	*test2;
// 	char	*test3;
// 	char	*test4;
// 	char	*test5;

// 	test1 = "   ---+--+1234ab567";
// 	test2 = "   +++-+--+56hello";
// 	test3 = "42";
// 	test4 = "   -00123";
// 	test5 = "   +++---";
// 	printf("Input: \"%s\" → Resultado: %d\n", test1, ft_atoi(test1)); // -1234
// 	printf("Input: \"%s\" → Resultado: %d\n", test2, ft_atoi(test2)); // -56
// 	printf("Input: \"%s\" → Resultado: %d\n", test3, ft_atoi(test3)); // 42
// 	printf("Input: \"%s\" → Resultado: %d\n", test4, ft_atoi(test4)); // -123
// 	printf("Input: \"%s\" → Resultado: %d\n", test5, ft_atoi(test5));
// 	// 0 (no número)
// 	return (0);
// }
