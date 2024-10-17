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

void	*ft_bzero(void *arr, size_t size)
{
	size_t	valeur;

	valeur = 0;
	while (valeur < size)
	{
		*(unsigned int *)(arr + valeur) = (unsigned int) '0';
		valeur++;
	}
	return (arr);
}
/*
int main(void)
{
	char    str[100];

	ft_bzero(str, 42);
	printf("%s\n", str);
	return (0);
}*/