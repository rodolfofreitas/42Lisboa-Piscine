/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:14:49 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/14 16:29:53 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}	
}

int	main(int argc, char **argv)
{
	int	i;

	i = (argc -1);
	while (i >= 1)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i--;
	}
}
