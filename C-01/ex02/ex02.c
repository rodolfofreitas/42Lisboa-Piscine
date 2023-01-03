/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:54:47 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/05 12:00:24 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int*b);

int	main(void)
{
	int	va;
	int	vb;
	int	*a = &va;
	int	*b = &vb;

	va = 42;
	vb = 24;

	printf("Antes de executar a funcao ft_swap:\n %p: %d, %p: %d\n", a, *a, b, *b);
	ft_swap(a, b);
	printf("Depois de executar a funcao ft_swap:\n %p: %d, %p: %d\n", a, *a, b, *b);
	return (0);
}
