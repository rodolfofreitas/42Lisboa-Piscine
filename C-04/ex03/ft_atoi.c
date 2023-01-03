/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:22:46 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/17 18:15:32 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sinal;
	int	resultado;

	i = 0;
	sinal = 1;
	resultado = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sinal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado = (str[i] - '0') + (resultado * 10);
		i++;
	}
	resultado = resultado * sinal;
	return (resultado);
}

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int	main()
{
	int a;


	a = ft_atoi("   -------+500");
	printf("%d\n", a);
}

