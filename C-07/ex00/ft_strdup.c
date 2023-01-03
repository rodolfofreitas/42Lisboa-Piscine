/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaldas- <rcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:47:53 by rcaldas-          #+#    #+#             */
/*   Updated: 2022/07/20 13:10:38 by rcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	unsigned int		i;
	unsigned int		j;
	char				*dest;

	i = 0;
	j = ft_strlen(src);
	dest = NULL;
	dest = malloc((j + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (i < j)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include<stdio.h>
#include<string.h>

int main(void)
{
    char source[] = "GeeksForGeeks";

    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = strdup(source);
    printf("\nTarget com uso da funcao strdup: %s", target);
    char* target2 = ft_strdup(source);
    printf("\nTarget com uso da funcao ft_strdup: %s", target2);
}
*/