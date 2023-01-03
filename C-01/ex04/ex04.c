/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:10:52 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/05 13:21:18 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int *a;
	int *b;

	a = calloc(1, sizeof(int));
	b = calloc(1, sizeof(int));
	*a = 42;
	*b = 10;

	printf("Valor antes da funcao ft_ultimate_div_mod: a: %p, *a: %d, b: %p, *b: %d\n", a, *a, b, *b);
	ft_ultimate_div_mod(a, b);
	printf("Valor depois da funcao ft_ultimate_div_mod; a: %p, *a: %d, b: %p, *b: %d\n", a, *a, b, *b);
	return (0);
}
