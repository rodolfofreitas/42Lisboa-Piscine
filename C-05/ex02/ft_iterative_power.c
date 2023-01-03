/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:27:22 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/17 20:14:46 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	long long	resultado;

	resultado = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 0)
	{
		resultado *= nb;
		power--;
	}
	return (resultado);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	printf("%i", ft_iterative_power(6, 4));
}
*/