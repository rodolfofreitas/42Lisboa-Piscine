/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:54:25 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/17 15:19:32 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	valida_base(char *vbase)
{
	int	i;
	int	k;

	if (vbase[0] == '\0' || vbase[1] == '\0')
		return (0);
	i = 0;
	while (vbase[i] != '\0')
	{
		k = i + 1;
		while (vbase[k] != '\0')
		{
			if (vbase[i] == vbase[k] || vbase[k] == '+' || vbase[k] == '-')
			{
				return (0);
			}
			if (vbase[i] == '+' || vbase[i] == '-')
			{
				return (0);
			}
			k++;
		}
	i++;
	}
	return (1);
}

void	print_base(int nbr, char *base)
{
	int				i;
	unsigned int	unbr;

	i = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
	unbr = -nbr;
	}
	else
	unbr = nbr;
	while (base[i] != '\0')
		i++;
	if (unbr / i > 0)
		print_base(unbr / i, base);
	ft_putchar(base[unbr % i]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	if (valida_base(base) == 0)
		i = 0;
	else
	{
		print_base(nbr, base);
	}
}


#include<stdlib.h>
int main(int argc, char** argv)
{
    int a;
	int nbr;
	char *base;

	a = argc;
	nbr = atoi(argv[1]);
	base = argv[2];
	ft_putnbr_base(nbr, base);
}
