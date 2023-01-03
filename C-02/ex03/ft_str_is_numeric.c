/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:13:49 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/08 15:05:58 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	idx;

	idx = 0;
	if (str[idx] == '\0')
	{
		return (1);
	}
	while (str[idx] != '\0')
	{
		if (str[idx] >= 48 && str[idx] <= 57)
			idx++;
		else
			return (0);
	}
	return (1);
}
