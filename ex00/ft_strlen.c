/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:21:22 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/22 16:53:57 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

// int	main(void)
// {
// 	char	*test1;
// 	char	*test2;
// 	char	*test3;
// 	char	*test4;

// 	test1 = "Hello, world!";
// 	test2 = "";
// 	test3 = "42";
// 	test4 = "C programming";
// 	printf("Length of \"%s\" is %d\n", test1, ft_strlen(test1));
// 	printf("Length of \"%s\" is %d\n", test2, ft_strlen(test2));
// 	printf("Length of \"%s\" is %d\n", test3, ft_strlen(test3));
// 	printf("Length of \"%s\" is %d\n", test4, ft_strlen(test4));
// 	return (0);
// }
