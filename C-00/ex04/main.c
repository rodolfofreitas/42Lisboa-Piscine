/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:59:37 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/02 18:24:39 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_is_negative(int n);

int	main(void)
{
	int	i;

	i = -7;
	while (i <= 7)
	{
		printf("Valor inserido %d, segundo seu programa ele e':  \n", i);
		ft_is_negative(i);
		i++;
		printf("\n");
	}
	printf("\n");
	return (0);
}
