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

void	ft_bzero(void *arr, size_t size)
{
	unsigned char	*valeur;

	valeur = (unsigned char *) arr;
	while (size-- > 0)
	{
		(*valeur++) = 0;
	}
}
/*
int main(void)
{
	char    str[100];

	ft_bzero(str, 42);
	printf("%s\n", str);
	return (0);
}*/