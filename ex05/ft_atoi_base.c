/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:55:35 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/27 11:26:29 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	i_base(char c, char *base)
{
	int	i;

	i = 0;
	while (*base)
	{
		if (c == *base)
			return (i);
		base++;
		i++;
	}
	return (-1);
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

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;
	int	base_len;
	int	index;

	result = 0;
	sign = 1;
	if (check_base(base))
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	base_len = ft_strlen(base);
	index = i_base(*str, base);
	while (index != -1)
	{
		result = result * base_len + index;
		index = i_base(*(++str), base);
	}
	return (result * sign);
}

// int	main(void)
// {
// 	int	val;

// 	char *bases[] = {
// 		"0123456789",       // decimal
// 		"01",               // binario
// 		"01234567",         // octal
// 		"0123456789ABCDEF", // hexadecimal
// 		"poneyvif",         // base personalizada (base 8)
// 	};
// 	char *nums[] = {
// 		"123",  // decimal 123
// 		"1101", // binario 13
// 		"77",   // octal 63
// 		"1A3",  // hexadecimal 419
// 		"noi",  // base personalizada: calcular valor abajo
// 	};
// 	for (int i = 0; i < 5; i++)
// 	{
// 		val = ft_atoi_base(nums[i], bases[i]);
// 		printf("ft_atoi_base(\"%s\", \"%s\") = %d\n", nums[i], bases[i], val);
// 	}
// 	return (0);
// }
