/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:50:20 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/04 14:01:25 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	imprime (void)
{
	write(1, "\nNao sei como fazer este exercicio.\n\nSorry :(\n\n", 49); 
}
void	ft_print_combn(int n)
{
	n = n + n;

	imprime(); 
}
