/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:12:27 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/15 12:12:30 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
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
		dest[valeur] = 0;
	}
	while (src[valeur])
		valeur++;
	return (valeur);
}
/*
int main(void)
{
	char    str1[] = "Hello !";
	char    str2[] = "Hie !    ";

	printf("%d\n", ft_strlcpy(str1, str2, 1));
	return (0);
}*/