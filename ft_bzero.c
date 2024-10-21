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

	valeur = (unsigned char *) arr;
	while (n-- > 0)
	{
		*valeur++ = 0;
	}
}
/*
int	main(void)
{
	char	buffer[10];

	strcpy(buffer, "Hello!");
	printf("Avant ft_bzero: %s\n", buffer);
	ft_bzero(buffer, 3);
	printf("Après ft_bzero sur les 3 premiers octets: ");
	for (int i = 0; i < 10; i++)
	{
		if (buffer[i] == 0)
			printf("\\0");
		else
			printf("%c", buffer[i]);
	}
	printf("\n");

	return 0;
}*/