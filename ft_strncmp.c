/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:53:42 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/14 15:58:41 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *str1, char *str2, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (++i < n && (*str1 || *str2))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	}
	return (0);
}
/*
int	main(void)
{
	int	n;
	char	str1[] = "bonjour";
	char	str2[] = "bonjour";
	
	n = 5;
	printf("%d\n", ft_strncmp(str1, str2, n));
	return (0);
}*/
