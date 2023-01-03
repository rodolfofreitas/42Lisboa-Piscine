/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:05:21 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/17 22:41:52 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a = 42;
	int b = 10;
	int *div = &a;
	int *mod = &b;

	a = 42;
	b = 10;

	printf("\nValor antes da funcao ft_div_mod, a: %d, b: %d \n", a, b);
	ft_div_mod(a, b, div, mod);
	printf("Valor apos a funcao ft_div_mod, div: %p, *div: %d, mod: %p, *mod: %d, a: %d, b: %d\n", div, *div, mod, *mod, a, b);
	return (0);
}
