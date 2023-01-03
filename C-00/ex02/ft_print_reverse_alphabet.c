/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:16:24 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/01 15:01:16 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)

{
	char	a;

	a = 'z';
	while (a >= 'a')
	{
		write (1, &a, 1);
		a--;
	}
}
