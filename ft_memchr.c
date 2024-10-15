/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:11:15 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/14 17:20:45 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *arr, int search, int size)
{
	int	valeur;

	valeur = 0;
	if (!arr)
		return (NULL);
	while (valeur < size)
	{
		if (*(unsigned int *)(arr + valeur) == (unsigned int )search)
			return ((void *)arr + valeur);
		valeur++;
	}
	return (NULL);
}
/*
int main(void)
{
	char    arr[12];

	ft_memchr(arr, 'A', 11));
	printf("%s\n", arr);
	return (0);
}*/