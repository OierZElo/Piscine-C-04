/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:39:43 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/25 12:50:26 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

// int	main(void)
// {
// 	ft_putstr("Hola, mundo!\n");
// 	ft_putstr("Esta es una prueba de ft_putstr.\n");
// 	ft_putstr("1234567890\n");
// 	ft_putstr(""); // Cadena vacía, no debería imprimir nada
// 	ft_putstr("¡Hasta luego!\n");
// 	return (0);
// }
