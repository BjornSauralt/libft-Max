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

int	ft_strlcat(char *dest, char *src, int size)
{
	int	valeur;

	valeur = 0;
	if (size > 0)
	{
		while (src[valeur] && valeur < size - 1)
		{
			dest[valeur] = src[valeur];
			valeur++;
		}
	}
}
