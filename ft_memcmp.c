/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:21:12 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/15 11:21:16 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t size)
{
	size_t	valeur;

	if (!size)
		return (0);
	valeur = 0;
	while (valeur < size)
	{
		if (*(unsigned int *)(arr1 + valeur)
		== *(unsigned int *)(arr2 + valeur))
			valeur++;
		else
			return (*(unsigned int *)(arr1 + valeur)
			- *(unsigned int *)(arr2 + valeur));
	}
	return (0);
}

/*
int main(void)
{
	char    arr1[] = "Hello";
	//char    arr2[] = "Hello";
	int resultat = ft_memcmp(arr1, arr1, 5);
	
	printf("%d\n", resultat);
	return (0);
}*/