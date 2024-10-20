/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:43:08 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/16 10:43:11 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elt, size_t size)
{
	void	*valeur;

	valeur = (void *)malloc(elt * size);
	if (!valeur)
		return (NULL);
	ft_bzero(valeur, elt * size);
	return (valeur);
}
/*
int	main(void)
{
	int	elt;
	int	size;

	size = 5;
	elt = 9;
	printf("%p\n", ft_calloc(elt, size));
	return (0);
}*/
