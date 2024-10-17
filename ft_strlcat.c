/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:35:00 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/15 13:35:01 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	valeur;

	valeur = 0;
	if (size > 0)
	{
		while (src[valeur] && valeur < size - 1)
		{
			dest[valeur] = src[valeur];
			valeur++;
		}
	}
	return (0);
}
/*
int main(void)
{
	char    str1[] = "Hello !";
	char    str2[] = "Hie !    ";

	printf("%d\n", ft_strlcat(str1, str2, 1));
	return (0);
}*/