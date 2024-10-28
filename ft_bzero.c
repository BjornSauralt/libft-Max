/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:51:34 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/15 11:51:36 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *arr, size_t n)
{
	unsigned char	*valeur;
	size_t	i;

	i = 0;
	valeur = (unsigned char *) arr;
	while (i < n)
	{
		*valeur++ = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	arr[10];

	strcpy(arr, "Hello!");
	printf("Avant ft_bzero: %s\n", arr);
	ft_bzero(arr, 3);
	printf("Apres ft_bzero : ");
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == 0)
			printf("\\0");
		else
			printf("%c", arr[i]);
	}
	printf("\n");

	return (0);
}*/