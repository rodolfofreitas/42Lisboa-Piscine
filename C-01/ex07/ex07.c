/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:17:14 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/05 21:11:46 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size);

int	main()
{
	int tab[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	int size = 12;

  printf("\nTabela original: ");
  printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11]);

	ft_rev_int_tab(tab, size);
  printf("\n\nTabela apos o uso da função ft_rev_int_tab: ");
	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11]);
	return (0);
}
