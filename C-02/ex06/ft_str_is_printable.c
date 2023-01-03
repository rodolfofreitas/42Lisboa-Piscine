/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:25:26 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/07 17:01:51 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	idx;

	idx = 0;
	if (str[idx] == '\0')
	{
		return (1);
	}
	while (str[idx] != '\0')
	{
		if (str[idx] >= 32 && str[idx] <= 126)
			idx++;
		else
			return (0);
	}
	return (1);
}
