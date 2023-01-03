/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:13:01 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/07 11:00:37 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char source[] = "Source string.";
	char destin[] = "Destination string.";
	char *dest;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", source, destin);

    dest = ft_strcpy(destin, source);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", source, dest);
	return (0);
}
