/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:25:24 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/20 13:10:56 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int *ft_range(int min, int max)
{
	int *matriz;
	int i;

	if (min >= max)
		return (0);
	matriz = malloc((max - min) * sizeof(int));
	if (matriz == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		matriz[i] = min;
		i++;
		min++;
	}
	return (matriz);
}

/*
#include <stdio.h>

int		*ft_range(int min, int max);
void	print_test(int *test, int size);

int	main(void)
{
	int *test0;
	int *test1;
	int *test2;
	int *test3;
	int *test4;

	test0 = ft_range(1, 11);
	printf("\n* test0 (1, 11): ");
	print_test(test0, 10);

	test1 = ft_range(2, 1);
	printf("\n* test1 (2, 1): ");
	print_test(test1, 0);

	test2 = ft_range(3, 3);
	printf("\n* test2 (3, 3): ");
	print_test(test2, 0);

	test3 = ft_range(4, 41);
	printf("\n* test4 (4, 41): ");
	print_test(test3, 37);

	test4 = ft_range(200, 500);
	printf("\n* test4 (200, 500): ");
	print_test(test4, 300);
}

void	print_test(int *test, int size)
{
	int i;

	for (i = 0; i < size - 1; i++)
	{
		printf("%d - ", test[i]);
	}
	if (size > 0)
		printf("%d\n", test[size - 1]);
}
*/