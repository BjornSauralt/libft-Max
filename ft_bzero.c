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

void	*ft_bzero(void *arr, int n)
{
	int	valeur;

	valeur = 0;
	while (valeur < n)
	{
		*(unsigned int *)(arr + valeur) = (unsigned int) '0';
		valeur++;
	}
	return (arr);
}
/*
int main(void)
{
	char    str[5] = "Hello";

	ft_bzero(str, 6);
	printf("%s\n", str);
	return (0);
}*/